# include <stdio.h>
# include <locale.h>
int numero;
int main() {
    printf("digite o numero a ser calculado: ", setlocale(LC_ALL,""));
    scanf("%d", &numero);
    int quadrado = numero * numero;
    int dobro = numero * 2;
    int triplo = numero * 3;
    int metade = numero / 2;
    printf("o n�mero elevado ao quadrado � igual a:%d\n", quadrado);
    printf("o dobro do  n�mero �: %d\n", dobro);
    printf("o triplo do n�mero �: %d\n", triplo);
    printf("a metade do n�mero �: %d\n", metade);
    return 0;
}
