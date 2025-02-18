#include<stdio.h>
int main () {
    int n, i, mul;
    scanf("%d", &n);
    for(i=1; i<=10; ++i) {
        mul = n *i;
        printf("%d x %d = %d\n",n,i, mul);
    }
}