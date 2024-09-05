#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main (void)
{
    setlocale(LC_ALL, "portuguese");
    int matriza[2][2], i,j;
    int matrizb[2][2], x,y;
    int matrizr[2][2];

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            matrizb[x][y] = 2;
        }
    }

    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            int valor;
            do
            {
                printf("Digite um valor positivo para a linha %d e coluna %d: ", i,j);
                scanf("%d", &valor);
            }
            while (valor < 0);
            matriza[i][j] = valor;
        }
    }

    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            matrizr[i][j] = matriza[i][j] % matrizb[i][j];
        }
    }

    printf("Matriz A\n");
    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", matriza[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz B\n");

    for (x=0; x<2; x++)
    {
        for(y=0; y<2; y++)
        {
            printf("%d\t", matrizb[x][y]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz Resultante da divisão entre matriz A e matriz B(apenas os restos)\n");

    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", matrizr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
