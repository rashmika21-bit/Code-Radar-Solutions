#include <stdio.h>

int main() {
    int n,i, j,a;
    scanf("%d", &n);
    int a=i;
    for(i=1; i<=n; i++){
        for(j=1; j<=a; j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}