#include <stdio.h>

void main() {
    int num;
    printf("Enter An Integer : ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d Is Even. ", num);
    else
        printf("%d Is Odd. ", num);
}