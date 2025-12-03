//Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    if (str1[0] != '\0' && str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if (str2[0] != '\0' && str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    // Calculate lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    // Check rotation by comparing str2 with each rotation of str1
    for (i = 0; i < len1; i++) {
        isRotation = 1;
        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                isRotation = 0;
                break;
            }
        }
        if (isRotation) break;
    }

    if (isRotation)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
