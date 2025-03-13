#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int num, n;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the bit position (0-based index): ");
    scanf("%d", &n);

    int bitValue = getNthBit(num, n);
    printf("The value of bit %d in %d is: %d\n", n, num, bitValue);
    
    return 0;
}
