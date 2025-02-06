#include <stdio.h>

    void printTriangle(int n) {
        if (n<1 || n> 10) {
            printf("Output");
            return;
        }

        for (int i = 1; i<=n; i++) {
            for ( int  j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    int main() {
        int n;
        printf(\n);
        scanf("%d", &n);
        return 0;
    }
