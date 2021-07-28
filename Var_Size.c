#include<stdio.h>

void main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // Size Of Variables
    printf("Size Of Int : %zu bytes\n", sizeof(intType));
    printf("Size Of Float : %zu bytes\n", sizeof(floatType));
    printf("Size Of Double : %zu bytes\n", sizeof(doubleType));
    printf("Size Of Char : %zu byte\n", sizeof(charType));
}