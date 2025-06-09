#include "TestCompletion.h"
#include <iomanip>
#include <sstream>
#include <string>


TestCompletion::TestCompletion()
{
  this->m_passedTests = 0;
  this->m_totalTests = 0;
}
TestCompletion::~TestCompletion() = default;


// TestCompletion &TestCompletion::Pass()
// {
//   this->m_totalTests++;
//   this->m_passedTests++;
//   return *this;
// }
//
// TestCompletion &TestCompletion::Fail()
// {
//   this->m_totalTests++;
//   return *this;
// }
//
//
// std::string TestCompletion::EvaluateTest() const
// {
//   if (this->m_totalTests == 0)
//   {
//     return "(no tests run)";
//   }
//
//   const float PERCENTAGE_PASSED = (static_cast<float>(m_passedTests) / static_cast<float>(m_totalTests)) * 100;
//   std::ostringstream oss;
//   oss << std::fixed << std::setprecision(2) << PERCENTAGE_PASSED;
//   return oss.str() + "%\n" + std::to_string(this->m_passedTests) + " out of " + std::to_string(this->m_totalTests) +
//          " tests passed.";
// }
// bool TestCompletion::DidAllTestsPass() const
// {
//   return this->m_totalTests != 0 && this->m_passedTests == this->m_totalTests;
// }
// bool TestCompletion::DidAnyTestPass() const { return this->m_passedTests != 0; }
