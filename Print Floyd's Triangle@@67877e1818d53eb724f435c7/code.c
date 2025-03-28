#include <stdio.h>

int main() {
    int n,i, j;
    int a=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=a; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}