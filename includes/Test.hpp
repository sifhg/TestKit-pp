#pragma once

#include <functional>
#include <list>
#include <map>
#include <string>
#include <vector>

#include "utils/FeatureTest.hpp"
#include "utils/TestCompletion.hpp"

class Test
{
public:
  explicit Test(const std::string &a_name);
  Test(const std::string &a_name, const std::vector<std::string> &a_features);
  ~Test();
  Test &AddFeature(const std::string &a_feature);
  // void AddFeatureTest(const std::string &a_description,
  //                     const std::list<std::string> &a_testedFeatures,
  //                     const std::function<void()> &a_testLogic);

  void Run() const;
  [[nodiscard]] std::string to_string() const;

private:
  std::vector<FeatureTest> m_featureTests;
  std::string m_name;
  std::map<std::string, TestCompletion> m_testCompletions;
};
