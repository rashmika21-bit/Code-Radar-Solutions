#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d 5d %d", &a, &b, &c);
    if (a == b && a == c) {
        printf("Equilateral\n");
    } else if (a == b || b ==c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene");
    }
}