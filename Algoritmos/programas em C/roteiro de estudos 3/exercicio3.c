/*Escreva um algoritmo em C que leia 3 n�meros inteiros diferentes, e depois apresente a soma, o produto, o menor e o maior desses n�meros.*/
# include <stdio.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL,"");
////////////////////////////////////////////////////
    printf("Digite primeiro o n�mero: ");
    int numero1;
        scanf("%d", &numero1);
////////////////////////////////////////////////////
    printf("Digite o segundo n�mero: ");
    int numero2;
        scanf("%d", &numero2);
////////////////////////////////////////////////////
    printf("Digite o terceiro n�mero: ");
    int numero3;
        scanf("%d", &numero3);
////////////////////////////////////////////////////
    int soma = numero1 + numero2 + numero3;
    int produto = numero1 * numero2 * numero3;

    printf("a soma dos n�meros �: %d\n", soma);
    printf("o produto dos n�meros �: %d\n", produto);
////////////////////////////////////////////////////
    if (numero1 > numero2 && numero1 > numero3){
        printf("%d � o maior n�mero\n", numero1);
    }
        else if (numero2 > numero1 && numero2 > numero3) {
        printf("%d � o maior n�mero\n", numero2);
    }
        else if (numero3 > numero2 && numero3 > numero1){
        printf("%d � o maior n�mero\n", numero3);
    }
////////////////////////////////////////////////////
    if (numero1 < numero2 && numero1 < numero3){
        printf("%d � o menor n�mero\n", numero1);
    }
        else if (numero2 < numero1 && numero2 < numero3) {
        printf("%d � o menor n�mero\n", numero2);
    }
        else if (numero3 < numero2 && numero3 < numero1){
        printf("%d � o menor n�mero\n", numero3);
    }
////////////////////////////////////////////////////
    else  {
        printf("n�meros iguais");
    }
////////////////////////////////////////////////////
return 0;
}
