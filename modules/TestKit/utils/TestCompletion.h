#ifndef TEST_COMPLETION_H
#define TEST_COMPLETION_H

#include <string>

class TestCompletion
{
public:
  TestCompletion();
  ~TestCompletion();
  // TestCompletion &Pass();
  // TestCompletion &Fail();
  // [[nodiscard]] std::string EvaluateTest() const;
  // [[nodiscard]] bool DidAllTestsPass() const;
  // [[nodiscard]] bool DidAnyTestPass() const;

private:
  unsigned short int m_totalTests;
  unsigned short int m_passedTests;
};

#endif // TEST_COMPLETION_H
