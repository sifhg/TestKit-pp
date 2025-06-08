// FeatureTest.h
#ifndef FEATURETEST_H
#define FEATURETEST_H
#include <functional>
#include <string>
#include <vector>

struct FeatureTest
{
  std::string description;
  std::vector<std::string> testedFeatures;
  std::function<void()> testLogic;
};

#endif // FEATURETEST_H
