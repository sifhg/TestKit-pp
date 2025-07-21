#include "TestUtilities.hpp"
#include <chrono>
#include <functional>
#include <iostream>

void TestUtilities::LogError(const std::string &a_message)
{
  std::cout << "\033[1;31m" << a_message << "\033[0m" << std::endl;
}
void TestUtilities::LogInfo(const std::string &a_message)
{
  std::cout << "\033[1;36m" << a_message << "\033[0m" << std::endl;
}
void TestUtilities::LogSuccess(const std::string &a_message)
{
  std::cout << "\033[1;32m" << a_message << "\033[0m" << std::endl;
}
void TestUtilities::LogWarning(const std::string &a_message)
{
  std::cout << "\033[1;33m" << a_message << "\033[0m" << std::endl;
}

std::chrono::duration<double, std::milli>
TestUtilities::MeasureExecutionTime(const std::function<void()> &a_action)
{
  const auto start = std::chrono::high_resolution_clock::now();
  a_action();
  const auto end = std::chrono::high_resolution_clock::now();
  return end - start;
}

bool TestUtilities::TryExecute(const std::string &a_actionDescription,
                               const std::function<void()> &a_action)
{
  try
  {
    const auto executionTime = MeasureExecutionTime(a_action);
    LogSuccess("Passed action: " + a_actionDescription);
    LogInfo("Execution time: " + std::to_string(executionTime.count()) + " ms");
    return true;
  }
  catch (const std::exception &ex)
  {
    LogWarning(ex.what());
    LogError("Failed action: " + a_actionDescription);
    return false;
  }
}
