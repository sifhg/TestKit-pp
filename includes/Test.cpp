#include "Test.hpp"
#include "utils/FeatureTest.hpp"
#include "utils/TestCompletion.hpp"
#include "utils/TestUtilities.hpp"

#include <map>
#include <ranges>
#include <stdexcept>
#include <string>


Test::Test(const std::string &a_name)
{
  m_name = a_name;
  m_testCompletions = {};
  m_featureTests = {};
}
Test::Test(const std::string &a_name, const std::vector<std::string> &a_features)
    : Test(a_name)
{
  for (const std::string &feature: a_features)
  {
    AddFeature(feature);
  }
}
Test::~Test() = default;

Test &Test::AddFeature(const std::string &a_feature)
{
  if (m_testCompletions.contains(a_feature))
  {
    throw std::runtime_error("Cannot add feature that already exists: " + a_feature);
  }
  m_testCompletions[a_feature] = TestCompletion{0, 0};
  return *this;
}

void Test::AddFeatureTest(const std::string &a_description,
                          const std::vector<std::string> &a_testedFeatures,
                          const std::function<void()> &a_testLogic)
{
  for (const std::string &feature: a_testedFeatures)
  {
    if (!m_testCompletions.contains(feature))
    {
      AddFeature(feature);
    }
  }
  m_featureTests.push_back(FeatureTest{a_description, a_testedFeatures, a_testLogic});
}


void Test::Run() const
{
  TestUtilities::LogInfo("\nRunning " + m_name);
  for (const auto &featureTest: m_featureTests)
  {
    if (TestUtilities::TryExecute(featureTest.description, featureTest.testLogic))
    {
      for (const std::string &feature: featureTest.testedFeatures)
      {
        m_testCompletions.at(feature).Pass();
      }
    }
    else
    {
      for (const std::string &feature: featureTest.testedFeatures)
      {
        m_testCompletions.at(feature).Fail();
      }
    }
  }

  for (const std::string &feature: m_testCompletions | std::views::keys)
  {
    TestUtilities::LogDefault("\nTests of " + feature + ":");
    std::string evaluation = m_testCompletions.at(feature).EvaluateTest();
    if (m_testCompletions.at(feature).DidAllTestsPass())
    {
      TestUtilities::LogSuccess(evaluation);
    }
    else if (m_testCompletions.at(feature).DidAnyTestPass())
    {
      TestUtilities::LogWarning(evaluation);
    }
    else
    {
      TestUtilities::LogError(evaluation);
    }
  }
}

std::string Test::to_string() const
{
  return "Name: " + m_name + "; No. of feature tests: " + std::to_string(m_featureTests.size()) +
         "; No. of features: " + std::to_string(m_testCompletions.size());
}
