#pragma once

struct TestCompletion
{
  unsigned short totalTests;
  unsigned short passedTests;
  void Pass()
  {
    totalTests++;
    passedTests++;
  }
  void Fail() { totalTests++; }
};
