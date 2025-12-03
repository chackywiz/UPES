//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    while (str[end] != '\0')
        end++;

    end--;                  // last index
    if (str[end] == '\n')   // ignore newline from fgets
        end--;

    // compare characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}

