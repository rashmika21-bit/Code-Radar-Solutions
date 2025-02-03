#include <stdio.h>

int main(){
    int first_prog;
    int sec_prog;
    scanf("%d", &first_prog);
    scanf("%d", &sec_prog);
    if (first_prog > sec_prog) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}