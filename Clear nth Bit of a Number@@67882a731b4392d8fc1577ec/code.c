#include <stdio.h>

int clearNthBit(int number, int n) {
    return number & ~(1 << n);
}

int main() {
    int number, n;
    
    // Read input in a single line
    scanf("%d %d", &number, &n);

    // Clear the nth bit and print the result
    printf("%d\n", clearNthBit(number, n));

    return 0;
}
