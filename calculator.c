#include <stdio.h>

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if(num2 != 0)
                result = divide(num1, num2);
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Error! Invalid operation.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}