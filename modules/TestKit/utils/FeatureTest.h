// FeatureTest.h
#pragma once

#include <functional>
#include <string>
#include <vector>

struct FeatureTest
{
  std::string description;
  std::vector<std::string> testedFeatures;
  std::function<void()> testLogic;
};
