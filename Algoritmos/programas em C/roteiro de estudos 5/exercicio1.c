#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void){
    setlocale(LC_ALL, "portuguese");
    int vetor[8];
    int x, y;
    printf("digite 8 valores: \n");
    for (int i = 0; i <=7; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite dois valores X e Y: ");
    scanf("%d %d", &x, &y);
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
    {
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores localizados nas posições X e Y do vetor é igual a: %d \n", soma);
    }
    else {
        printf("digite dois numero entre 0 e 7: ");
        scanf("%d %d", &x , &y);
    }
return 0;
}
