#include<stdio.h>
void main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d", &num);

    if (num < 0){
        printf("Negative\n");
    }
    else if (num == 0){
        printf("Zero Value");
    }
    else{
        printf("Positive\n");
    }
}