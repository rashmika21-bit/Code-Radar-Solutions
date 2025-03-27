#include <stdio.h>

int main() {
    int N;

    // Prompt user to enter the number of rows
    printf("");
    scanf("%d", &N);

    // Loop for each row
    for (int i = N; i >= 1; i--) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}