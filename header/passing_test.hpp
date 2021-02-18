#ifndef __CONSTRUCTOR_TEST__
#define __CONSTRUCTOR_TEST__
#include <gtest/gtest.h>
#include <rectangle.hpp>

TEST(CONSTRUCTOR_TEST, negativeWidthTest)
{
    Rectangle r = Rectangle(-10, 5);
    EXPECT_EQ(r.get_width(), 10);
}

TEST(CONSTRUCTOR_TEST, negativeHeightTest)
{
    Rectangle r = Rectangle(-10, 5);
    EXPECT_EQ(r.get_height(), 5);
}

TEST(CONSTRUCTOR_TEST, negativeRectTest)
{
    Rectangle r = Rectangle(-10, -5);
    EXPECT_EQ(r.get_width(), 10);
    EXPECT_EQ(r.get_height(), 5);
}

TEST(CONSTRUCTOR_TEST, negativeWidthTest)
{
    Rectangle r = Rectangle(-10, 5);
    EXPECT_EQ(r.area(), 50);
}
// AREA TEST //
TEST(AREA_TEST, negativeHeightTest)
{
    Rectangle r = Rectangle(-10, 5);
    EXPECT_EQ(r.area(), 50);
}

TEST(AREA_TEST, negativeRectTest)
{
    Rectangle r = Rectangle(-10, -5);
    EXPECT_EQ(r.area(), 50);
}
#endif