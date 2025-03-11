#include <stdio.h>
int main () {
    int a;
    scanf("%d", &a);
    if (a & 1){
        printf("Set", a);
    } else {
        printf("Not Set\n", a);
    }
    return 0;
}