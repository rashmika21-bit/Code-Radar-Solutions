// Your code here...
#include <stdio.h>

int toggleNthBit(int number, int n) {
    return number ^ (1 << n);
}

int main() {
    int number, n;
    
    // Read input in a single line
    scanf("%d %d", &number, &n);

    // Toggle the nth bit and print the result
    printf("%d\n", toggleNthBit(number, n));

    return 0;
}
