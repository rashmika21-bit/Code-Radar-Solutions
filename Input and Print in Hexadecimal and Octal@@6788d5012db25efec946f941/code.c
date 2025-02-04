#include <stdio.h>
int main () {
    int a;
    fgets("%d", &a);
    printf("Hexadecimal: %x\n", a);
    printf("Octal: %o\n", a);
    return 0;
}