/*Proponha um algoritmo em C que pe�a ao usu�rio que digite 2 n�meros, obtenha esses dois valores, calcule e exiba: a soma, o produto, a diferen�a e a divis�o.*/
# include <stdio.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    /////////////////////////////////////
    printf("digite o primeiro n�mero: ");
    double numero1;
    scanf("%lf", &numero1);
    /////////////////////////////////////
    printf("digite o segundo n�mero: ");
    double numero2;
    scanf("%lf", &numero2);
    /////////////////////////////////////
    double soma = numero1 + numero2;
    double produto = numero1 * numero2;
    double diferenca = numero1 - numero2;
    double divisao = numero1 / numero2;
    printf("a soma dos n�meros �: %.2lf\n", soma);
    printf("o produto dos n�meros �: %.2lf\n", produto);
    printf("a diferen�a dos n�meros �: %.2lf\n", diferenca);
    printf("a divis�o dos n�meros �: %.2lf\n", divisao);
    /////////////////////////////////////
    return 0;
}
