# include <stdio.h>
#include <locale.h>
int numero;
int main () {
    printf("digite um numero inteiro: ", setlocale(LC_ALL,""));
    scanf("%d", &numero);
    float tresporcento = numero * 0.03;
    float trintaporcento = numero * 0.3;
    float centotrintaporcento = numero * 1.30;
    printf("3 porcento do numero é igual a:%f\n", tresporcento);
    printf("30 porcento do numero é igual a:%f\n", trintaporcento);
    printf("130 porcento do numero é igual a:%f", centotrintaporcento);
    return 0;
}
