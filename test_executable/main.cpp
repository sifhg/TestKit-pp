#include <iostream>
#include "../includes/Test.hpp"

int main()
{
  Test aTest = Test("I'm a test", {"one", "two", "three"});
  std::cout << aTest.to_string() << ".\n";
  aTest.AddFeature("Two").AddFeature("Three");
  std::cout << aTest.to_string() << ".\n";
  aTest.Run();
  return 0;
}
