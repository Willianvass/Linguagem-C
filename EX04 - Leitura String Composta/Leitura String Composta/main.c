#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[60];
    printf("Qual seu nome completo: ");
    scanf("\n%[^\n]s", &nome);

    printf("Parabens %s", nome);
}
