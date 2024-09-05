/*Proponha um algoritmo em C que peça ao usuário que digite 2 números, obtenha esses dois valores, calcule e exiba: a soma, o produto, a diferença e a divisão.*/
# include <stdio.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    /////////////////////////////////////
    printf("digite o primeiro número: ");
    double numero1;
    scanf("%lf", &numero1);
    /////////////////////////////////////
    printf("digite o segundo número: ");
    double numero2;
    scanf("%lf", &numero2);
    /////////////////////////////////////
    double soma = numero1 + numero2;
    double produto = numero1 * numero2;
    double diferenca = numero1 - numero2;
    double divisao = numero1 / numero2;
    printf("a soma dos números é: %.2lf\n", soma);
    printf("o produto dos números é: %.2lf\n", produto);
    printf("a diferença dos números é: %.2lf\n", diferenca);
    printf("a divisão dos números é: %.2lf\n", divisao);
    /////////////////////////////////////
    return 0;
}
