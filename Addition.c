#include <stdio.h>
void main() {    

    int num1, num2, sum;
    
    printf("Enter Two Integers : ");
    scanf("%d %d", &num1, &num2);

    // calculating sum
    sum = num1 + num2;      
    
    printf("%d + %d = %d ", num1, num2, sum);
}