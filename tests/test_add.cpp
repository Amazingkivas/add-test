#include <gtest/gtest.h>
#include "../src/add.h"

// Тест для проверки сложения двух положительных чисел
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

// Тест для проверки сложения отрицательного и положительного числа
TEST(AddTest, NegativeAndPositive) {
    EXPECT_EQ(add(-2, 3), 1);
}

// Тест для проверки сложения двух отрицательных чисел
TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

// Тест для проверки сложения нуля
TEST(AddTest, ZeroAddition) {
    EXPECT_EQ(add(0, 5), 5);
    EXPECT_EQ(add(0, 0), 0);
}