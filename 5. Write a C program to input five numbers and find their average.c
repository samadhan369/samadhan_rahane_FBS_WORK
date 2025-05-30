///5. Write a C program to input five numbers and find their average./
#include <stdio.h>

void main() {
    int n1, n2, n3, n4, n5;
    float average;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter third number: ");
    scanf("%d", &n3);

    printf("Enter fourth number: ");
    scanf("%d", &n4);

    printf("Enter fifth number: ");
    scanf("%d", &n5);

    average = (n1 + n2 + n3 + n4 + n5) / 5.0;

    printf("Average = %.2f\n", average);
}
