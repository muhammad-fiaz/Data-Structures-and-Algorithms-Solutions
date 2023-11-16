# Two Sum - Explanation

## Approach


The Two Sum problem is efficiently solved using a hash map (`numMap`) to store the complement of each element along with its index. The algorithm iterates through the array once, calculating the complement for each element. If the complement is found in the hash map, it implies a pair with the target sum exists, and the function returns the indices of the two elements.


## Implementation

```cpp
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};


```
```cpp
    Solution solution;
    std::vector<int> nums = {3, 1, 4, 6, 5};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target);
    // The result should be [2, 4] since nums[2] + nums[4] == 9.
```

In this example, the array nums is different, and the target sum is set to 9. The comment explains that the expected result is [2, 4] because the elements at indices 2 and 4 in the array add up to the target sum.

This solution has a time complexity of O(n) and a space complexity of O(n), making it an efficient way to solve the "Two Sum" problem. The hash map allows for constant-time lookups, optimizing the overall performance of the algorithm.

