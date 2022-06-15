#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, soma;
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma de %d + %d da o total de: %d", num1, num2, soma);
}
