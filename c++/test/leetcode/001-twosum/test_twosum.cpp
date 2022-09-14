#include <iostream>
#include "gtest/gtest.h"

#include "leetcode/001-twosum/twosum.h"

TEST(TwoSumTests, ExampleInput) {
    std::vector<int> nums{2,7,11,15};
    int target = 9;
    std::vector<int> answer = TwoSum::twoSum(nums, target);
    EXPECT_EQ(2, answer[0]);
    EXPECT_EQ(7, answer[1]);
    EXPECT_EQ(target, answer[0] + answer[1]);
}