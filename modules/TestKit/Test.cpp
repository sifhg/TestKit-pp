module;
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include "utils/FeatureTest.h"
#include "utils/TestCompletion.h"

export module Test;

export class Test
{
public:
  Test(std::string a_name, const std::set<std::string> &a_features);
  explicit Test(std::string a_name);
  void AddFeatureTest(std::string a_description, std::set<std::string> a_testedFeatures,
                      std::function<void()> a_testLogic);
  Test &AddFeature(std::string a_feature);
  void Run();
  [[nodiscard]] std::string to_string() const;

private:
  std::vector<FeatureTest> m_featureTests;
  std::string m_name;
  std::map<std::string, TestCompletion> m_testCompletions;
};

Test::Test(std::string a_name, const std::set<std::string> &a_features) : m_name(std::move(a_name))
{
  std::cout << a_features.size() << std::endl; // TODO, handle a_features
};
Test::Test(std::string a_name) : m_name(std::move(a_name)) {}

std::string Test::to_string() const
{
  return "name: " + m_name + ".\nNumber of feature test: " + std::to_string(m_featureTests.size()) +
         ".\nNumber of test completions: " + std::to_string(m_testCompletions.size());
}
