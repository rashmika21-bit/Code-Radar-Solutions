#include <stdio.h>

int lowestSetBitPosition(int number) {
    if (number == 0) return -1;
    
    int position = 0;
    while ((number & 1) == 0) {
        number >>= 1;
        position++;
    }
    
    return position;
}

int main() {
    int number;
    
    scanf("%d", &number);
    printf("%d\n", lowestSetBitPosition(number));

    return 0;
}
