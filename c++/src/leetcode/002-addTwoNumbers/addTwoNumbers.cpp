#include "leetcode/002-addTwoNumbers/addTwoNumbers.h"

#include <iostream>

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    return addTwoNumbersRecursive(l1, l2, 0);
}

ListNode* Solution::addTwoNumbersRecursive(ListNode* l1, ListNode* l2, int rCarry) {
    // Exit case
    if (l1 == nullptr && l2 == nullptr && rCarry == 0) return nullptr;

    // Initialize next node pointers to avoid nullptr access
    ListNode* l1n = nullptr;
    ListNode* l2n = nullptr;

    int carry = 0;
    int sum = rCarry;

    // Perform summation
    if (l1 != nullptr) {
        sum += l1->val;
        l1n = l1->next;
    }
    if (l2 != nullptr) {
        sum += l2->val;
        l2n = l2->next;
    }

    // Handle possible carry
    carry = sum / 10;
    if (sum >= 10) {
        sum -= 10;
    }

    return new ListNode(sum, addTwoNumbersRecursive(l1n, l2n, carry));
}