#include <stdio.h>
int main () {
    int a, b;
    char operator;
    scanf("%d %d %c", &a, &b, &operator);
    if (operator == '+') {
        printf("%d", a, b, a + b);
    } else if (operator == '-') {
        printf("%d", a, b, a - b);
    } else if (operator == '*') {
        printf("%d", a, b, a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("%d", a, b, a / b);
        } else {
            printf("Division by zero not possible");
        }
    }else {
        printf("Error");
    }
}