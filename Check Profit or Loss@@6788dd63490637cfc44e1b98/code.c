#include <stdio.h>
int main () {
    int Cp, Sp;
    scanf("%d %d", &Cp, &Sp);
    if (Cp> Sp) {
        printf("Loss\n");
    } else if (Sp>Cp) {
        printf("Profit\n");
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
