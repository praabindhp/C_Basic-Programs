#include<stdio.h>
void main()
{
    int num1, num2;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2){ // > Greater Than or = Equal

        if (num1 == num2){
            printf("Equal\n");
        }
        else{
            printf("%d is greater than %d", num1, num2);
        }

    }
    else { // < Less Than
        printf("%d is smaller than %d", num1, num2);
    }
}