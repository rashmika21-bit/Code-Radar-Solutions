#include <stdio.h>
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Hexadecimal: %x\n", a);
    printf("Octal: %o\n", a);

    printf("Hexadecimal: %x\n", b);
    printf("Octal: %o\n", b);
    return 0;
}