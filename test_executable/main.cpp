#include <iostream>
#include <list>
import Test;

int main()
{
  Test aTest = Test("I'm a test", {"Volvo", "BMW", "Ford", "Mazda"});
  aTest.AddFeature("Heej").AddFeature("Heejj").AddFeature("Heejjj");
  aTest.Run();
  std::cout << "Press enter to end...\n";
  return 0;
}
