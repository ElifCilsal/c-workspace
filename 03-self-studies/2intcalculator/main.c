#include <stdio.h>
#include <math.h>

int main() {
    char operator = '\0';
    double number1 = 0.0;
    double number2 = 0.0;
    double result = 0.0;

    printf("Enter a number:");
    scanf("%lf", &number1);
    printf("Enter a number:");
    scanf("%lf", &number2);
    printf("Operation (+ - * /):");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                printf("Learn math!");
                break;
            }
            else {
                result = number1 / number2;
            }
    }
    printf("%lf", result);
    return 0;
}