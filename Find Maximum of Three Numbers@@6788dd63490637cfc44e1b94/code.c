#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b ) && (a>c)) {
        printf("\n", a);
    } else if ((b>a) && (b>c)) {
        printf("\n", b);
    } else {
        printf("\n", c);
    }
    return 0;
}