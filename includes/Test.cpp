#include "Test.hpp"
#include "utils/FeatureTest.hpp"
#include "utils/TestCompletion.hpp"

#include <string>
#include <map>


Test::Test(std::string a_name)
{
  m_name = a_name;
  m_testCompletions = { };
  m_featureTests = { };
}
Test::~Test() = default;

Test& Test::AddFeature(const std::string &a_feature)
{
  if (m_testCompletions.contains(a_feature))
  {

  }
  m_testCompletions[a_feature] = TestCompletion{0, 0};
  return *this;
}

std::string Test::to_string() const
{
  return "Name: " + m_name +
    "; No. of feature tests: " + std::to_string(m_featureTests.size()) +
    "; No. of features: " + std::to_string(m_testCompletions.size());
}