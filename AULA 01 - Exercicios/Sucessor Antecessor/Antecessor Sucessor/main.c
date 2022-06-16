/* Faça um programa em C que leia um número inteiro e imprima o seu antecessor
e o seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int antecessor, sucessor, num;
    antecessor = 1;
    sucessor = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    antecessor = num - antecessor;
    sucessor = num + sucessor;
    printf("O numero %d tem por Antecessor %d e Sucessor %d", num, antecessor, sucessor);
    return 0;
}
