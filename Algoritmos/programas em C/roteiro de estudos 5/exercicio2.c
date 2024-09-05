#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void){
    setlocale(LC_ALL, "portuguese");
    int vetor[10];
    int pares = 0;
    printf("Digite 10 valores para o vetor: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("Quantidade de pares no vetor : %d", pares);
return 0;
}
