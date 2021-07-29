#include<stdio.h>

void main()
{
    int num, sum = 0;

    do {
        printf("Enter A Number : ");
        scanf("%d", &num);
        sum += num; // sum = sum + num
    }
    while(num != 0);

    printf("Sum = %d\n", sum);
}