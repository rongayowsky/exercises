#include "leetcode/001-twoSum/twoSum.h"

#include <iostream>
#include <unordered_map>

std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> x;
    std::vector<int> ans;
    for (int i = 0; i < nums.size(); ++i) {
      int z = target - nums[i];
      if (x.find(z) != x.end()) {
        ans.push_back(i);
        ans.push_back(x[z]);
      } else {
        x[nums[i]] = i;
      }
    }

    return ans;
}