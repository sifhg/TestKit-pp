// TestCompletion.h
#pragma once

#include <string>

class TestCompletion
{
public:
  TestCompletion() = default;
  ~TestCompletion() = default;
  TestCompletion &Pass();
  TestCompletion &Fail();
  [[nodiscard]] std::string EvaluateTest() const;
  [[nodiscard]] bool DidAllTestsPass() const;
  [[nodiscard]] bool DidAnyTestPass() const;

private:
  unsigned short int m_totalTests;
  unsigned short int m_passedTests;
};
