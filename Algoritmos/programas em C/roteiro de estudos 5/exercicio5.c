#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void){
    setlocale(LC_ALL, "portuguese");
    int vetor1[10];
    int vetor2[10];
    int vetor3[10];
    printf("Digite 10 valores para o vetor1: \n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite 10 valores para o vetor2: \n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i <= 9; i++){
        vetor3[i] = vetor1[i] - vetor2[i];
    }
    for (int i = 0; i <= 9; i++){
        printf("%d ", vetor3[i]);
    }
    return 0;

}
