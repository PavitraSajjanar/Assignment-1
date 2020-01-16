#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Code to swap two numbers using 'xor' operator \n");
    printf("Enter two numbers\n");

    scanf("%d %d", &a, &b);

    printf("\nThe numbers before swapping: \n");
    printf("a: %d\tb: %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nThe numbers after swapping: \n");
    printf("a: %d\tb: %d\n", a, b);

    return 0;
}

