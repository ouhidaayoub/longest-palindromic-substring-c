#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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

            }else{
                if (isTheCheckContinous == 1) {
                    leftEdgeIndex -= 2;
                    possiblePalindromeIndices[leftEdgeIndex] = 0;
                    rightEdgeIndex -= 2;
                    possiblePalindromeIndices[rightEdgeIndex] = 0;
                }

                leftIndex = i;
                whileIterations++;

                rightIndex = (stringLength - 1 - whileIterations);

                isFirstEdgeMatch = 0;
                isTheCheckContinous = 0;
            }

        }

    }

    int maxSubstringLength = 0;
    int maxSubstringIndices[2] = {0, 0};

    for (int edgeIndices = 0; edgeIndices <= (rightEdgeIndex - 2); edgeIndices += 2) {
        if ((possiblePalindromeIndices[edgeIndices + 1]) - (possiblePalindromeIndices[edgeIndices]) > maxSubstringLength) {
            maxSubstringLength = ((possiblePalindromeIndices[edgeIndices + 1]) - (possiblePalindromeIndices[edgeIndices]));
            maxSubstringIndices[0] = 0;
            maxSubstringIndices[1] = 0;
            maxSubstringIndices[0] += possiblePalindromeIndices[edgeIndices];
            maxSubstringIndices[1] += possiblePalindromeIndices[edgeIndices + 1];
        }
    }

    size_t resultStringSize = 1000;
    char *resultString = malloc(resultStringSize + 1);
    int resultIndex = 0;

    for (int copyingIndex = maxSubstringIndices[0]; copyingIndex <= maxSubstringIndices[1]; copyingIndex++) {
        resultString[resultIndex] = s[copyingIndex];
        resultIndex++;
    }

    resultString[resultIndex] = '\0';

    size_t resultLength = strlen(resultString);
    resultString = realloc(resultString, (resultLength + 1));

    free(possiblePalindromeIndices);

    return resultString;
}