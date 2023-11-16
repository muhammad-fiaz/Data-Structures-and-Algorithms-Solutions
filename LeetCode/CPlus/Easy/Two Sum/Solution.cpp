#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    static std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create a hash map to store the complement of each element along with its index
        std::unordered_map<int, int> numMap;

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            // Calculate the complement for the current element
            int complement = target - nums[i];

            // Check if the complement is found in the hash map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the indices of the two elements
                return {numMap[complement], i};
            }

            // If complement is not found, add the current element and its index to the hash map
            numMap[nums[i]] = i;
        }

        // If no solution is found, return an empty vector
        return {};
    }
};

int main() {
    // Example usage of the twoSum function
    Solution solution;

    // Input array
    std::vector<int> nums = {2, 7, 11, 15};

    // Target sum
    int target = 9;

    // Call the twoSum function
    std::vector<int> result = Solution::twoSum(nums, target);

    // Display the result
    if (!result.empty()) {
        std::cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
