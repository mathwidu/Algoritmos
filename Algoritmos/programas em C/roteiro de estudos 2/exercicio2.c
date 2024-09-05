# include <stdio.h>
int numero;
int quadrado;
int main () {
    printf("digite um numero:");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("Quadrado: %d", quadrado);
    return  0;
}
