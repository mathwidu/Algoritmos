#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10];
    int negativo = 0;
    int somapositivos = 0;
    printf("Digite 10 valores para o vetor: \n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0)
        {
            negativo ++;
        }
        else
        {
            somapositivos += vetor[i];
        }
    }
    printf("negativos: %d\n", negativo);
    printf("soma dos numeros positivos: %d\n", somapositivos);
    return 0;
}
