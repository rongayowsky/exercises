#include <iostream>

#include "gtest/gtest.h"
#include "leetcode/002-addTwoNumbers/addTwoNumbers.h"

TEST(addTwoNumsTests, ExampleInput) {
    // 51 + 49 = 100
    ListNode* n1d1 = new ListNode(1);
    ListNode* n1d2 = new ListNode(5);
    n1d1->next = n1d2;

    ListNode* n2d1 = new ListNode(9);
    ListNode* n2d2 = new ListNode(4);
    n2d1->next = n2d2;

    ListNode* ans = Solution::addTwoNumbers(n1d1, n2d1);
    EXPECT_EQ(0, ans->val);
    EXPECT_EQ(0, ans->next->val);
    EXPECT_EQ(1, ans->next->next->val);
}