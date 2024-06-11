#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int n = s.length();
        int maxLength = 0;
        int left = 0, right = 0;
        std::unordered_set<char> charSet;

        while (right < n) {
            if (charSet.find(s[right]) == charSet.end()) {
                charSet.insert(s[right]);
                maxLength = std::max(maxLength, right - left + 1);
                right++;
            } else {
                charSet.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};

int main() {
    Solution solution;
    std::string s1 = "abcabcbb";
    std::string s2 = "bbbbb";
    std::string s3 = "pwwkew";

    std::cout << "Example 1: " << solution.lengthOfLongestSubstring(s1) << std::endl;
    std::cout << "Example 2: " << solution.lengthOfLongestSubstring(s2) << std::endl;
    std::cout << "Example 3: " << solution.lengthOfLongestSubstring(s3) << std::endl;

    return 0;
}
