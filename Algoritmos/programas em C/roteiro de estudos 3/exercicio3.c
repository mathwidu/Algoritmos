/*Escreva um algoritmo em C que leia 3 números inteiros diferentes, e depois apresente a soma, o produto, o menor e o maior desses números.*/
# include <stdio.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL,"");
////////////////////////////////////////////////////
    printf("Digite primeiro o número: ");
    int numero1;
        scanf("%d", &numero1);
////////////////////////////////////////////////////
    printf("Digite o segundo número: ");
    int numero2;
        scanf("%d", &numero2);
////////////////////////////////////////////////////
    printf("Digite o terceiro número: ");
    int numero3;
        scanf("%d", &numero3);
////////////////////////////////////////////////////
    int soma = numero1 + numero2 + numero3;
    int produto = numero1 * numero2 * numero3;

    printf("a soma dos números é: %d\n", soma);
    printf("o produto dos números é: %d\n", produto);
////////////////////////////////////////////////////
    if (numero1 > numero2 && numero1 > numero3){
        printf("%d é o maior número\n", numero1);
    }
        else if (numero2 > numero1 && numero2 > numero3) {
        printf("%d é o maior número\n", numero2);
    }
        else if (numero3 > numero2 && numero3 > numero1){
        printf("%d é o maior número\n", numero3);
    }
////////////////////////////////////////////////////
    if (numero1 < numero2 && numero1 < numero3){
        printf("%d é o menor número\n", numero1);
    }
        else if (numero2 < numero1 && numero2 < numero3) {
        printf("%d é o menor número\n", numero2);
    }
        else if (numero3 < numero2 && numero3 < numero1){
        printf("%d é o menor número\n", numero3);
    }
////////////////////////////////////////////////////
    else  {
        printf("números iguais");
    }
////////////////////////////////////////////////////
return 0;
}
