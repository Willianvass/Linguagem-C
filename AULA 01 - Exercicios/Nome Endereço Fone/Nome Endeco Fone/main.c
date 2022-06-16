/*Faça um programa em C que leia o nome o endereço e o telefone de um cliente e
ao final, imprima esses dados.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[100], endereco[100], fone[100];

    printf("Qual seu nome: \n");
    scanf("%s", &nome);
    printf("Endereco: \n");
    scanf("%s", &endereco);
    printf("Fone: \n");
    scanf("%s", &fone);
    printf("Parabens %s vamos enviar no endereço %s e te ligamos no fone %s", nome, endereco, fone);
    return 0;
}
