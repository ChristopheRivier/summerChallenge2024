#include <gtest/gtest.h>
#include <vector>
#include <algorithm>



using namespace std;

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {

  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
