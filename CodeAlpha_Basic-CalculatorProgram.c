#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("====================================\n");
    printf("      BASIC CALCULATOR PROGRAM      \n");
    printf("====================================\n");
    
    // Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Get the two numbers from the user
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid number input.\n");
        return 1;
    }

    // Perform calculation based on operator using switch-case
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Handle division by zero
            if (num2 == 0) {
                printf("\nError: Division by zero is undefined.\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("\nError: Invalid operator '%c'. Please use +, -, *, or /.\n", operator);
            break;
    }

    return 0;
}
