#include <stdio.h>

int main() {
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = a || b;
    printf("a: %d, b: %d, result: %d\n");
    return 0;
}
