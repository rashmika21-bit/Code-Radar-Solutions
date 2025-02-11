#include <stdio.h>
int main () {
    double a, b;
    char operator;
    scanf("%f %f %c", &a, &b, &operator);
    if (operator == '+') {
        printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
    } else if (operator == '-') {
        printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
    } else if (operator == '*') {
        printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
        } else {
            printf("Division by zero not possible");
        }
    }else {
        printf("Error");
    }
}