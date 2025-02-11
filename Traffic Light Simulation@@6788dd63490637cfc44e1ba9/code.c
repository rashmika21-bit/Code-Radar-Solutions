#include <stdio.h>
int main () {
    char action;
    scanf("%c", &action);
    switch (action):
    case 'R':
    printf("Stop");
    break;
    case 'G':
    printf("Go");
    break;
    case 'Y':
    printf("Slow Down");
    break;
    default:
    printf("Invalid input");
}