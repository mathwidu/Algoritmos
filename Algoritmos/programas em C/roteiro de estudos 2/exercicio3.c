# include <stdio.h>
# include <locale.h>
int n1;
int n2;
int soma;
int diferenca;
int produto;
int main () {
    printf("digite o primeiro numero: ", setlocale(LC_ALL,""));
    scanf("%d", &n1);
    printf("\ndigite o segundo numero: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    diferenca= n1 - n2;
    produto = n1 * n2;
    printf("\na soma dos numeros �: %d\n\n", soma);
    printf("a diferen�a entre os numeros �: %d\n\n", diferenca);
    printf("o produto entre os numeros �: %d\n\n", produto);
    return 0;
}
