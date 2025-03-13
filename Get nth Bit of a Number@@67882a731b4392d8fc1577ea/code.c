#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    printf("");
    scanf("%d", &num);
    printf("");
    scanf("%d", &n);

    int bitValue = getNthBit(number, n);
    printf("The value of bit %d in %d is: %d\n", n, number, bitValue);
    
    return 0;
}
