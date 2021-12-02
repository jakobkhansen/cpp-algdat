#include <gtest/gtest.h>
#include "./arraylist.cpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  ArrayList<int> list;
  list.append(10);
  list.append(20);
  list.append(30);
  list.append(0);

  EXPECT_EQ(list[0], 10);
  EXPECT_EQ(list[1], 20);
  EXPECT_EQ(list[2], 30);
  EXPECT_EQ(list[3], 0);




  // Expect two strings not to be equal.
  // Expect equality.
  //EXPECT_EQ(isEven(4), true);
  //EXPECT_EQ(isEven(3), false);
  //EXPECT_EQ(isEven(2), true);
}
