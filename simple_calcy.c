#include <stdio.h>

int main() {
    char operator;
    float num1, num2;
    int valid = 0;

    // Loop until a valid operator is entered
    while (!valid) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // Check if the operator is valid
        if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
            valid = 1; // Set valid to 1 to exit the loop
        } else {
            printf("Invalid operator! Please enter one of (+, -, *, /).\n");
        }
    }

    printf("Enter number 1: ");
    scanf(" %f", &num1);

     printf("Enter number 2: ");
    scanf(" %f", &num2);


    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
    }

    return 0;
}
