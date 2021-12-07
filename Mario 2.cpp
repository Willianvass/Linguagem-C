#include <stdlib.h>
#include <stdio.h>

int main(int vargc. char *vargc)
{
     //  Pega o valor de n com o usuário
    int n;
    do
    {
          n = Altura;
    }
    while (n < 1 || n > 8);

    // Imprima blocos
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j  < n ; j++)
        {
            if (i + j < n - 1)
                printf(" ");
            else
                 printf("#");

        }
    printf("\n");
    }

}