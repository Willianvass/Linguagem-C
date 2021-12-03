#include <stdio.h>
#include <stdlib.h> //area de declarações, vale para todo codigo
//swit case
int numero;//declarando antes do main torna para todo codigo

int main(int argc, char *argv[])

{
	printf("Sistema\n\n");
	printf("1- Windows: \n");/* \n pula quantas linhas colocar*/
	printf("2- Linux: \n");
	printf("Escolha o melhor sistema: \n");
	scanf("%d", &numero);//%d por ser um INT - &numero o que for digitado armazene em numero
	switch(numero)
	{
		case 1://Quantos cases forem necesarios
			system("cls");
			printf("Iniciando Windows ....\n");
			break;
		case 2:
			system("cls");
			printf("Iniciando Linux....\n");
			break;
		default:
			printf("ERROR\n\n"); //tudo que for diferente da este mensagem
	}
	system("pause");
	return 0;
	
}