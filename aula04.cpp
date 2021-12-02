#include <stdio.h> 
#include <stdlib.h> 
/*variavel numero inteiro 
Estruturas de decisão*/
int main(int argc, char *argv[])
{
	int idade;
	printf("Qual a sua idade: ");
	scanf("%d", &idade);//gets para guardar char - scanf para armazenar numeros - %s variavel CHAR - %d variavel INT
	printf("Sua idade: %d",idade);
	//Linha abaixo executa estrutura de decisão IF e ELSE - Não usa % abaixo
	if (idade<18)//estrutura de decisão
	{
		printf("\nMenor de idade!\n");
	}
	if (idade>=18)//estrutura de decisão
	{
		printf("\nMaior de idade!!\n");
	}	
    system("pause");
    return 0;
}

