#include "TestUtilities.hpp"
#include <iostream>
#include <functional>

void TestUtilities::LogInfo(const std::string &a_message) {
    std::cout << "\033[1;36m" << a_message << "\033[0m" << std::endl;
}

bool TestUtilities::TryExecute(
  const std::string &a_actionDescription,
  const std::function<void()> &a_action)
{
  return true;
}