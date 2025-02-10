#include <stdio.h>
int main () {
    int Grade;
    scanf("%d", &Grade);
    if (Grade>=90) {
        printf("A", Grade);
    } else if ((Grade >=80) && (Grade < 90)) {
        printf("B", Grade);
    } else if ((Grade >= 70) && (Grade <80)) {
        printf("C", Grade);
    } else if ((Grade >= 60) && (Grade < 70)) {
        printf("D", Grade);
    } else {
        printf("F");
    }
    return 0;
}