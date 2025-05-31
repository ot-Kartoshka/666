#include <gtest/gtest.h>
#include "lab_math.h"

TEST(MathTest, Addition) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(-5, 5), 0);
    EXPECT_EQ(add(0, 0), 0);
}

TEST(MathTest, Subtraction) {
    EXPECT_EQ(subtract(5, 2), 3);
    EXPECT_EQ(subtract(2, 5), -3);
    EXPECT_EQ(subtract(0, 0), 0);
}

TEST(MathTest, Multiplication) {
    EXPECT_EQ(multiply(2, 3), 6);
    EXPECT_EQ(multiply(-2, 3), -6);
    EXPECT_EQ(multiply(0, 100), 0);
}
