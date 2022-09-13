#include <iostream>
#include "gtest/gtest.h"

#include "twosum.h"

TEST(TwoSumTests, ExampleInput) {
    vector<int> nums{2,7,11,15};
    int target = 9;
    int answer = TwoSum::twoSum(nums, target);
    EXPECT_EQ(target, answer);
}