#include <gtest/gtest.h>
#include "./arraylist.cpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  // Expect equality.
  EXPECT_EQ(isEven(4), true);
  EXPECT_EQ(isEven(3), false);
  EXPECT_EQ(isEven(2), true);
}
