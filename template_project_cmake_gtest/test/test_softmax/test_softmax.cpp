#include "softmax.hpp"
#include "gtest/gtest.h"

namespace {

class tests_softmax : public ::testing::Test {
 protected:
  tests_softmax() {
    // You can do set-up work for each test here.
  }

  virtual ~tests_softmax() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

TEST_F(tests_softmax, returns_tab_summing_to_one) {
  std::vector<double>   value;
  std::vector<double>   result;
  double  test = 0;

  value.push_back(0.1);
  value.push_back(0.8);
  value.push_back(1.9);
  value.push_back(3.1);

  result = softmax(value);

  test = 0;
  for(int i = 0; i < result.size(); i++)
    test += result[i];

  EXPECT_EQ(1, test);
}

TEST_F(tests_softmax, passes_other_test) {
}

}  // namespace