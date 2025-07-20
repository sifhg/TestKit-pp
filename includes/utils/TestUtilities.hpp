#pragma once

#include <string>
#include <functional>

class TestUtilities
{
public:
  static void LogInfo(const std::string &a_message);
  static bool TryExecute(
    const std::string &a_actionDescription,
    const std::function<void()> &a_action);
};