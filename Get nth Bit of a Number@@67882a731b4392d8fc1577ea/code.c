#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int number, n;
    
    // Read input in a single line
    scanf("%d %d", &number, &n);

    // Retrieve and print the nth bit
    printf("%d\n", getNthBit(number, n));
    
    return 0;
}
