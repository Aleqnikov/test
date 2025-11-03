#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, Multiply) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(2, 3), 6);
}
