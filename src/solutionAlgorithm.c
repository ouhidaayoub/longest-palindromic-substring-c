#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* longestPalindrome(char* s);

int main() {
    char *result = longestPalindrome("babad");
    printf("Input: %s | Longest palindrome: %s\n", "babad", result);
    return 0;
}

char* longestPalindrome(char* s) {

    bool charactersAreTheSame = 0;
    bool isFirstEdgeMatch = 0;
    bool isTheCheckContinous = 0;

    int stringLength = strlen(s);

    int *possiblePalindromeIndices;
    int capacity = 2 * stringLength + 2;
    possiblePalindromeIndices = malloc(capacity * sizeof(int));

    int leftEdgeIndex = 0;
    int rightEdgeIndex = 1;

    possiblePalindromeIndices[leftEdgeIndex] = 0;
    possiblePalindromeIndices[rightEdgeIndex] = 0;

    int whileIterations = 0;

    for (int i = 0; i < (stringLength - 1); i++) {

        charactersAreTheSame = 0;
        isFirstEdgeMatch = 0;
        isTheCheckContinous = 0;
        whileIterations = 0;

        int leftIndex = i;
        int rightIndex = (stringLength - 1 - whileIterations);

        isFirstEdgeMatch = 0;
        charactersAreTheSame = 0;

        while (charactersAreTheSame == 0) {

            if (s[leftIndex] == s[rightIndex]) {
                
                charactersAreTheSame = 1;

                if ((charactersAreTheSame == 1) && (isFirstEdgeMatch == 1) && (isTheCheckContinous == 1)) {
                    isFirstEdgeMatch = 0;
                } else if ((charactersAreTheSame == 1) && (isFirstEdgeMatch == 0) && (isTheCheckContinous == 0)){
                    isFirstEdgeMatch = 1;
                }

                if ((charactersAreTheSame == 1) && (isFirstEdgeMatch == 1)) {

                    possiblePalindromeIndices[leftEdgeIndex] += leftIndex;
                    leftEdgeIndex += 2;
                    possiblePalindromeIndices[leftEdgeIndex] = 0;

                    possiblePalindromeIndices[rightEdgeIndex] += rightIndex;
                    rightEdgeIndex += 2;
                    possiblePalindromeIndices[rightEdgeIndex] = 0;

                    isTheCheckContinous = 1;
                }

                if ((leftIndex == rightIndex) || ((leftIndex + 1) == rightIndex)) {
                    if(((leftIndex + 1) == rightIndex));
                    else if((leftIndex == rightIndex));
                    break;
                } else {
                    leftIndex++;
                    rightIndex--;
                    charactersAreTheSame = 0;
                    isFirstEdgeMatch = 0;
                }

            }

        }

    }
    
}