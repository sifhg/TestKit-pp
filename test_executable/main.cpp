#include <iostream>
#include "../includes/Test.hpp"

int main()
{
  auto testSuite = Test("MyFeatureTests");
  testSuite.AddFeature("FeatureA").AddFeature("FeatureB");

  testSuite.AddFeatureTest("Test FeatureA functionality", {"FeatureA"},
                           []
                           {
                             auto a = 2;
                             auto b = 3;
                             auto c = a / b;
                           });

  testSuite.Run();
  return 0;
}
