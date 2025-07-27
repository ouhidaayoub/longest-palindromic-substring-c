# Longest Palindromic Substring

[LeetCode Problem #5](https://leetcode.com/problems/longest-palindromic-substring/description/)

Given a string `s`, return the longest palindromic substring in `s`.

## Examples

Input: s = "babad"  
Output: "bab"  
Explanation: "aba" is also a valid answer.

Input: s = "cbbd"  
Output: "bb"

Input: s = "a"  
Output: "a"

Input: s = "ac"  
Output: "a"

## Constraints

- 1 <= s.length <= 1000  
- `s` consists only of digits and English letters.

## Hints *(from the original LeetCode problem)*

1. How can we reuse a previously computed palindrome to compute a larger palindrome?  
2. If "aba" is a palindrome, is "xabax" a palindrome? Similarly, is "xabay" a palindrome?  
3. Complexity-based hint:  
   - A brute-force check of every start and end index has O(n²) pairs and O(n) per check.  
   - Can we reduce the palindromic check to O(1) by reusing previous computations?