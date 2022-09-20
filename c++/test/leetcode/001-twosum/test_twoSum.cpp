#include <iostream>
#include "gtest/gtest.h"

#include "leetcode/001-twoSum/twoSum.h"

TEST(TwoSumTests, ExampleInput) {
    std::vector<int> nums{2,7,11,15};
    int target = 9;
    std::vector<int> answer = TwoSum::twoSum(nums, target);
    EXPECT_EQ(target, nums[answer[0]] + nums[answer[1]]);
}