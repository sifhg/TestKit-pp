#pragma once
#include <iomanip>
#include <sstream>

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
  [[nodiscard]] std::string EvaluateTest() const
  {
    if (totalTests == 0)
    {
      return "(no tests run)";
    }
    std::ostringstream percentageStream;
    percentageStream << std::fixed << std::setprecision(2)
                     << static_cast<float>(passedTests) / static_cast<float>(totalTests) * 100;

    return percentageStream.str() + "\n" + std::to_string(passedTests) + " out of " +
           std::to_string(totalTests) + " tests passed";
  }
  [[nodiscard]] bool DidAllTestsPass() const
  {
    return totalTests != 0 && passedTests == totalTests;
  }
  [[nodiscard]] bool DidAnyTestPass() const { return passedTests != 0; }
};
