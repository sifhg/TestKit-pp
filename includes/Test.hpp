#pragma once

#include <string>
#include <list>
#include <functional>
#include <map>

#include "utils/FeatureTest.hpp"
#include "utils/TestCompletion.hpp"

class Test
{
public:
  explicit Test(std::string a_name);
  Test(std::string a_name, const std::list<std::string> &a_features);
  ~Test();
  Test &AddFeature(const std::string &a_feature);
  void AddFeatureTest(const std::string &a_description,
                      const std::list<std::string> &a_testedFeatures,
                      const std::function<void()> &a_testLogic);

  void Run() const;
  std::string to_string() const;

private:
  std::vector<FeatureTest> m_featureTests;
  std::string m_name;
  std::map<std::string, TestCompletion> m_testCompletions;
};