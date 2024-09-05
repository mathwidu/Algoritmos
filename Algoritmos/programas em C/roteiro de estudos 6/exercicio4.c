#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main (void)
{
    setlocale(LC_ALL, "portuguese");
    int matriz [3][9], i,j;
    int valor[3] = {10,12,14};
    int incremento = 6;

    for (i=0; i<3; i++)
    {
        for(j=0; j<9; j++)
        {
            matriz[i][j]  = valor[i];
            valor[i] = valor[i] + incremento;
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<9; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
