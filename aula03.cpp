#include <stdio.h> //biblioteca de entrada e saida
#include <stdlib.h> //biblioteca funções basicas do sistema
#include <locale.h> //biblioteca de idiomas

int main(void)
{
    char nome[30]; //tamanho maximo de caracteres
    printf("Qual seu nome: ");
    gets(nome); //leia o que usurio digitou e armazene me nome
    system("cls"); //limpar a tela
    printf("Bem vindo %s\n",nome);//%s avisa a memoria que a variavel é caractere
    system("pause");
    return 0;
}
/*Escrevi variavel CHAR > Digitte o nome > Armazenou em NOME > Cls limpou a tela >*/
/*Juntou o texto Berm vindo com a variavel nome*/
