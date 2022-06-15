#include <stdio.h>
#include <stdlib.h>

void main()
{
    char produto[50];
    printf("Qual o produto: ");
    fgets(produto, 50, stdin);

    printf("Produto: %s\n", produto);
}
