//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];      // To store last seen index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d", maxLen);

    return 0;
}
