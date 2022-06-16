/*Faça um programa em C que leia um número real e imprima ¼ deste número.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float numero, total;
    printf("Primeiro numero: ");
    scanf("%f", &numero);
    total = numero / 4;
    printf("O total: %2.2f", total);
}
