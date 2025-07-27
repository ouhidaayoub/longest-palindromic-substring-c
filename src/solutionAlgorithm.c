#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* longestPalindrome(char* s);

int main() {
    char input[] = "babad";
    char *result = longestPalindrome("babad");
    printf("Input: %s | Longest palindrome: %s\n", input, result);
    return 0;
}

char* longestPalindrome(char* s) {
    return s;
}