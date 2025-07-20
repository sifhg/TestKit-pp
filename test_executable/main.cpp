#include <iostream>
#include <list>
#include "../includes/Test.hpp"
// import Test;

int main()
{
  Test aTest = Test("I'm a test", {"one", "two", "three"});
  std::cout << aTest.to_string() << ".\n";
  aTest.AddFeature("Two")
    .AddFeature("Three");
  std::cout << aTest.to_string() << ".\n";
  aTest.Run();
  // Test aTest = Test("I'm a test", {"Volvo", "BMW", "Ford", "Mazda"});
  // aTest.AddFeature("Heej").AddFeature("Heejj").AddFeature("Heejjj");
  // aTest.Run();
  // std::cout << "Press enter to end...\n";
  return 0;
}
