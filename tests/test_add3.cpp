#include "gtest/gtest.h"
#include "../include/mylib/utils.h"


TEST(AdditionTest, HandlesPositiveNumbers)
{
	EXPECT_EQ(add(2, 7), 9);

}