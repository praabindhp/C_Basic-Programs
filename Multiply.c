#include <stdio.h>

void main() {
    double a, b, product;
    printf("Enter Two Numbers : ");
    scanf("%lf %lf", &a, &b);
    product = a * b;
    printf("Product = %.2lf ", product);
}