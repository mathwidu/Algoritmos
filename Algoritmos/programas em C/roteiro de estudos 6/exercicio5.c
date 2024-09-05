#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main (void)
{
    setlocale(LC_ALL, "portuguese");

    int vetora[5];
    int vetorb[5];
    int matriz [3][5], i,j;

    printf("digite 5 valores pares para o vetor A: \n");
    for (int i=0; i<5; i++)
    {
        do
        {
            scanf("%d", &vetora[i]);
            if (vetora[i] % 2 !=0)
            {
                printf("Valor invalido, digite um valor par: ");
            }
        }
        while (vetora[i] % 2 != 0);
    }

    printf("digite 5 valores impares para o vetor B: \n");
    for (int i=0; i<5; i++)
    {
        do
        {
            scanf("%d", &vetorb[i]);
            if (vetorb[i] % 2 == 0)
            {
                printf("Valor invalido, digite um valor impar: ");
            }
        }
        while (vetorb[i] % 2 == 0);
    }



    for(j=0; j<5; j++)
    {
        matriz[0][j] = vetora[j];
        matriz[1][j] = vetorb[j];
        matriz[2][j] = vetora[j] + vetorb[j];
    }



    printf("Vetor A:");
    for (int i=0; i<5; i++)
    {
        printf("%d ", vetora[i]);
    }
    printf("\n");

    printf("Vetor B:");
    for (int i=0; i<5; i++)
    {
        printf("%d ", vetorb[i]);
    }
    printf("\n");

    printf("Matriz A, B, Soma de AB:");

    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
