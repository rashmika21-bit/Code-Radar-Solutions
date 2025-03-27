#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int balloons[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &balloons[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (balloons[j] > balloons[j + 1]) {
                int temp = balloons[j];
                balloons[j] = balloons[j + 1];
                balloons[j + 1] = temp;
            }
        }
    }

    int rounds = 0;
    int start = 0; 
    while (start < n) {
        printf("%d\n", n - start); 
        int airToDeflate = balloons[start]; 
        rounds++;

        for (int i = start; i < n; i++) {
            balloons[i] -= airToDeflate; 
        }

        while (start < n && balloons[start] == 0) {
            start++;
        }
    }

    return 0;
}