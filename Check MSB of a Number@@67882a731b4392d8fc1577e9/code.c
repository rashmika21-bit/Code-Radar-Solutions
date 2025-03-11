#include <stdio.h>
int main () {
    int a;
    int msb = 1<< 31;
    scanf("%d", &a);
    if ( a & msb) {
        printf("Set");
    } else {
        printf("Not Set");
        return 0;
    }
}