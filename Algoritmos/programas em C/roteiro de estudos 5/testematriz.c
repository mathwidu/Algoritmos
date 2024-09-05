#include <stdio.h>
#include <locale.h>


int main (void)
{
    setlocale(LC_ALL, "portuguese");

    int matriz[3][3], i,j;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            do
            {
                printf("Digite o valor para a linha %d e coluna %d: ", i,j);
                scanf("%d", &matriz[i][j]);
            }
            while (matriz [i][j] <= 0);
        }
    }

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n Elementos da diagonal principal:");
    for(i=0; i<3; i++)
    {
        printf("%d", matriz[i][i]);
    }
    printf("\nElementos da diagonal secundaria: ");
    for(i=0; i<3; i++)
    {
        printf("%d", matriz[i][2-i]);
    }
    return 0;
}
