#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "C:/Users/priva/OneDrive/Documents/Practicing C Language/Longest Palindromic Substring/src/solutionAlgorithm.c"

int main() {
    char *result1 = longestPalindrome("babad");
    printf("Input: %s | Longest palindrome: %s\n", "babad", result1);

    char *result2 = longestPalindrome("cbbd");
    printf("Input: %s | Longest palindrome: %s\n", "cbbd", result2);

    char *result3 = longestPalindrome("aacabdkacaa");
    printf("Input: %s | Longest palindrome: %s\n", "aacabdkacaa", result3);

    char *result4 = longestPalindrome("racecar");
    printf("Input: %s | Longest palindrome: %s\n", "racecar", result4);

    char *result5 = longestPalindrome("aaaa");
    printf("Input: %s | Longest palindrome: %s\n", "aaaa", result5);

    char *result6 = longestPalindrome("anana");
    printf("Input: %s | Longest palindrome: %s\n", "anana", result6);

    char *result7 = longestPalindrome("abcde");
    printf("Input: %s | Longest palindrome: %s\n", "abcde", result7);

    char *result8 = longestPalindrome("abacdfgdcaba");
    printf("Input: %s | Longest palindrome: %s\n", "abacdfgdcaba", result8);

    return 0;
}