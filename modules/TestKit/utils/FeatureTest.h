#ifndef FEATURE_TEST_H
#define FEATURE_TEST_H

#include <functional>
#include <string>
#include <vector>

struct FeatureTest
{
  std::string description;
  std::vector<std::string> testedFeatures;
  std::function<void()> testLogic;
};

#endif // FEATURE_TEST_H
