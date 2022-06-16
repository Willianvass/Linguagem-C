/*Faça um programa em C que leia dois números inteiros e imprima a subtração
deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, subtracao;
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    subtracao = num1 - num2;
    printf("O produto da subtracao: %d", subtracao);
    return 0;
}
