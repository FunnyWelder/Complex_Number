#include "gtest/gtest.h"
#include "lib.h"


TEST(OperatorPlus, expectedPlus)
{
    ComplexNumber a {1,2}, b {2,3};
    ComplexNumber exp = a + b;
    EXPECT_EQ(3, exp.x);
    EXPECT_EQ(5, exp.y);
}

TEST(OperatorMinus, expectedMinus)
{
    ComplexNumber a{3,2}, b{2,1};
    ComplexNumber exp = a - b;
    EXPECT_EQ(1, exp.x);
    EXPECT_EQ(1, exp.y);
}

TEST(OperatorMultiplication, expectedMultiplication)
{
    ComplexNumber a {3,2}, b {2,1};
    ComplexNumber exp = a * b;
    EXPECT_EQ(4, exp.x);
    EXPECT_EQ(7, exp.y);
}

TEST(OperatorDivision, expectedDivision)
{
    ComplexNumber a {4,2}, b {2,1};
    ComplexNumber exp = a / b;
    EXPECT_EQ(2, exp.x);
    EXPECT_EQ(0, exp.y);
}

TEST(OperatorEquival, expectedTrue)
{
    ComplexNumber a {4,5}, b {4,5};
    EXPECT_EQ((a == b), true);
}

TEST(OperatorEquival, expectedFalse)
{
    ComplexNumber a {4,5}, b {2,1};
    EXPECT_EQ((a == b), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}