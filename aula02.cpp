#include <stdio.h> //biblioteca de entrada e saida
#include <stdlib.h> //biblioteca funções basicas do sistema
#include <locale.h> //biblioteca de idiomas

int main(void)
{
	setlocale(LC_ALL,"Portuguese");//configura idioma portugues
	system("color b");//altera a cor 3=fundo a=letra colorida
	printf("Olá Mundo!!!\n");
    system("pause");//limpa e muda a tela
    system("cls");//limpa a tela
    printf("Willian Vasselo\n");
    system("pause");
    return 0;
}

