//FUNÇÕES: Bloco de codigos que podem ser usados, aproveita o codigo varia vezes
//Declarar junto com as bibliotecas
#include <stdio.h>
#include <stdlib.h>


void teste(void);//Precisa sempre declarar a função, mas eescreve ela depois do main

int main(int argc, char *argv[])
{
	printf("Exemplo de funcao\n\n");
	teste();//Chamar a função pelo nome
	teste();
	printf("Fim!!\n");
	system("pause");
	return 0;
}

void teste(void)//não use o ; - Sempre declarar funçoes no fim
{
	printf("Willian Vasselo\n");//Declarar a função
}
