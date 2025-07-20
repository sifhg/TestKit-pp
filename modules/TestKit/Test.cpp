// module;
// #include <algorithm>
// #include <functional>
// #include <iostream>
// #include <list>
// #include <map>
// #include <utility>
// #include "utils/FeatureTest.h"
// #include "utils/TestCompletion.h"


// export module Test;

// export class Test
// {
// public:
//   Test(std::string a_name, const std::list<std::string> &a_features);
//   explicit Test(std::string a_name);
//   ~Test();
//   Test &AddFeature(const std::string &a_feature);
//   void AddFeatureTest(const std::string &a_description,
//                       const std::list<std::string> &a_testedFeatures,
//                       const std::function<void()> &a_testLogic);

//   void Run() const;

// private:
//   std::vector<FeatureTest> m_featureTests;
//   std::string m_name;
//   std::map<std::string, TestCompletion> m_testCompletions{};
// };

// Test::Test(std::string a_name)
//     : m_featureTests({})
//     , m_name(std::move(a_name))
//     , m_testCompletions({})
// {
// }
// Test::Test(std::string a_name, const std::list<std::string> &a_features)
//     : m_featureTests({})
//     , m_name(std::move(a_name))
//     , m_testCompletions({})
// {
//   for (const std::string &feature: a_features)
//   {
//     m_testCompletions.insert({feature, TestCompletion()});
//   }
// }
// Test::~Test() = default;
// void Test::Run() const // TODO Needs real implementation
// {
//   std::cout << m_name << std::to_string(m_featureTests.size())
//             << std::to_string(m_testCompletions.size()) << "\n";
// }
// Test &Test::AddFeature(const std::string &a_feature)
// {
//   m_testCompletions.insert({a_feature, TestCompletion()});
//   return *this;
// }
// void Test::AddFeatureTest(const std::string &a_description,
//                           const std::list<std::string> &a_testedFeatures,
//                           const std::function<void()> &a_testLogic)
// {
//   // TODO Write implementation
// }
