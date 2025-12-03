/*Write a program to implement a basic calculator using switch-case 
for +, -, *, /, %.
*/

#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator : ");
    scanf(" %c", &op);  // space before %c to ignore newline

    switch (op) {
        case '+':
            printf("Result =%d",a+b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Error: Modulus by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
