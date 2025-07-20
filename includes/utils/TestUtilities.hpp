#pragma once

#include <chrono>
#include <functional>
#include <string>

class TestUtilities
{
public:
  static void LogError(const std::string &a_message);
  static void LogInfo(const std::string &a_message);
  static void LogSuccess(const std::string &a_message);
  static void LogWarning(const std::string &a_message);
  static std::chrono::duration<double, std::milli> MeasureExecutionTime(
    const std::function<void()> &a_action
  );
  static bool TryExecute(
    const std::string &a_actionDescription,
    const std::function<void()> &a_action);
};