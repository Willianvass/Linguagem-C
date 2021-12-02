#include <stdio.h> //biblioteca de entrada e saida
#include <stdlib.h> //biblioteca funções basicas do sistema
#include <locale.h> //biblioteca de idiomas

int main(void)
{
    char nome[30]; //tamanho maximo de caracteres
    printf("Qual seu nome: ");
    scanf (nome); //leia o que usurio digitou e armazene me nome
    system("cls"); //limpar a tela
    printf("Bem vindo %s\n",nome);//%s avisa a memoria que a variavel é caractere
    system("pause"); //pausa e pede uma tecla para continuar
    return 0;
}
/*começar sempre
#include <stdio.h> 
#include <stdlib.h> 


int main(int argc, char *argv[])
{
    system("pause");
    return 0;
}*/


