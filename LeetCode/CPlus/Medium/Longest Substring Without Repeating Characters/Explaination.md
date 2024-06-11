# Longest Substring Without Repeating Characters Explanation

## Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

## Approach

The problem is efficiently solved using a sliding window approach. We maintain a set (`charSet`) to store the characters in the current substring without repeating characters. We also maintain two pointers (`left` and `right`) to represent the current window.

Initially, both `left` and `right` are set to 0. We expand the window by moving `right` to the right until we encounter a repeating character. When a repeating character is found, we contract the window by moving `left` to the right until the repeating character is no longer in the window.

We keep track of the maximum length of the non-repeating substring (`maxLength`) as we iterate through the string.

## Implementation

```cpp
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
```

In this implementation, we initialize the variables `n` (length of the input string `s`), `maxLength` (maximum length of the non-repeating substring), `left`, and `right` pointers, and a set `charSet` to store characters in the current substring.

We iterate through the string `s` using the `right` pointer. For each character `s[right]`:
- If `s[right]` is not in `charSet`, we add it to `charSet` and update `maxLength` if the current substring length is greater.
- If `s[right]` is already in `charSet`, we remove `s[left]` from `charSet` and increment `left` until `s[left]` is no longer in `charSet`.

We return `maxLength` as the result.

This solution has a time complexity of O(n) and a space complexity of O(min(n, m)), where n is the length of the input string `s` and m is the size of the character set (e.g., 26 for lowercase English letters). The space complexity is determined by the size of the `charSet`.
