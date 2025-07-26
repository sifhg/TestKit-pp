#include <iostream>
#include "../include/TestKit/Test.hpp"

int main()
{
  auto testSuite = Test("MyFeatureTests");
  testSuite.AddFeature("FeatureA").AddFeature("FeatureB").AddFeature("FeatureC");

  testSuite.AddFeatureTest("Test FeatureA and FeatureB functionality", {"FeatureA", "FeatureB"},

                           []
                           {
                             auto a = 2;
                             auto b = 3;
                             auto c = a / b;
                           });
  testSuite.AddFeatureTest("Test FeatureB and FeatiureC functionality", {"FeatureB", "FeatureC"},
    []
    {
        throw std::runtime_error("An error occurred");
    }
  );

  testSuite.Run();
  return 0;
}
