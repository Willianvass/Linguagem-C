#include <stdio.h> 
#include <stdlib.h> 
//Variavel tipo FLOAT - Estrutras de decisão
int main(int argc, char *argv[])
{
	float nota1, nota2, media;//declarou 3 variaveis, como sao do mesmo tipo podem ficar na mesma linha
	printf("Digite a nota1: ");
	scanf("%f", &nota1);//armazenou em %f nota1 e nota2
	printf("Digite a nota1: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("Media: %.2f\n", media);//%.2f - casa decimais apos virgula, so usa no fim nunca formatação
	if (media<6)
	{
		printf("\nAluno Reprovado!!\n");
	}
	else//tudo que for diferente de if escreve abaixo
	{
		printf("\nAluno Aprovado!!\n");
	}
    system("pause");
    return 0;
}