#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void){
    setlocale(LC_ALL, "portuguese");
    int vetor[10];
    printf("Digite 10 valores para o vetor: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 0; i <= 9; i++)
    {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O menor e o maior numero do vetor são respectivamente: %d e %d", menor, maior);
}
