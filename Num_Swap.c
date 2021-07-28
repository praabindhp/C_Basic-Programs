#include<stdio.h>

void main() {
      double first, second, temp;
      printf("Enter First Number : ");
      scanf("%lf", &first);
      printf("Enter Second Number : ");
      scanf("%lf", &second);

      temp = first;
      first = second;
      second = temp;

      printf("\nAfter Swapping, First Number = %.2lf \n", first);
      printf("After Swapping, Second Number = %.2lf ", second);
}