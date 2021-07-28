#include <stdio.h>

int hcf(int n1, int n2);

void main() {
    int n1, n2;
    printf("Enter Two Positive Integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D Of %d & %d Is %d. ", n1, n2, hcf(n1, n2));
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}