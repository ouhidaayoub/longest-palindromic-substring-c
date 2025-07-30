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

<h2>LeetCode Final Analysis (Screenshots)</h2>

<table>
  <tr>
    <td><img src="assets/performance/runtime.png" alt="Runtime" width="420"></td>
    <td><img src="assets/performance/memory.png" alt="Memory" width="420"></td>
  </tr>
</table>

## 💭 My Reaction

Honestly, I’m happy with how this solution turned out.  
The time complexity being **O(n²)** makes sense for this type of approach,  
and the space complexity staying at **O(n)** feels efficient enough.  

Right now, I’m also learning **Manacher’s algorithm**, and I plan to use it in the future.  
I didn’t use it this time because I didn’t know it yet,  
and I don’t like copying code for things I don’t understand.  
When I learn it properly, I’ll implement it myself and compare the results.