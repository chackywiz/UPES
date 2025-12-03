//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq[256] = {0};   // ASCII frequency table
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters in str1
    while (str1[i] != '\0') {
        if (str1[i] != '\n')   // ignore newline
            freq[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;

    // Subtract characters of str2
    while (str2[i] != '\0') {
        if (str2[i] != '\n')
            freq[(unsigned char)str2[i]]--;
        i++;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
