/*Escreva um algoritmo em C que a partir de 2 inteiros informados pelo usu�rio,
identifique qual o maior valor entre eles e o exibe seguido das palavras �valor maior�. Caso os n�meros sejam iguais, exiba a mensagem �valores iguais�.*/

# include <stdio.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL,"");
////////////////////////////////////////////////////
    printf("digite o primeiro n�mero: ");
    int numero1;
    scanf("%d", &numero1);
////////////////////////////////////////////////////
    printf("digite o segundo n�mero: ");
    int numero2;
    scanf("%d", &numero2);
////////////////////////////////////////////////////
    if (numero1 > numero2){
        printf("%d � o valor maior.\n", numero1);
        } else if (numero2 > numero1){
        printf("%d � o valor maior.\n", numero2);
        } else{
            printf("valores iguais\n");
        }
////////////////////////////////////////////////////
return 0;
}
