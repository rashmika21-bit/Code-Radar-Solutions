#include <stdio.h>
int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = a || b;
    printf("%d\n", a, b, result );
    return 0;
}