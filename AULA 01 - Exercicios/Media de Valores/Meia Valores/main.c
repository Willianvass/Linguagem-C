// Faça um programa em C que imprima a média aritmética entre os números 5, 8,
// 12.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float num1, num2, num3, media;
    num1 = 5;
    num2 = 8;
    num3 = 12;
    media = (num1 + num2 + num3) / 3;
    printf("A media: %1.2f\n", media);
    return 0;
}
