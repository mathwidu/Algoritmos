#include <stdio.h>
#include <locale.h>
#include <math.h>
///////////////////////////////////////////////////
int main (void){
    setlocale(LC_ALL,"Portuguese");
///////////////////////////////////////////////////
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
///////////////////////////////////////////////////
    int linhas = 0;
///////////////////////////////////////////////////
    while (linhas < n){
        int asteriscos = 0;
        while (asteriscos <=linhas){
            printf("*");
            asteriscos++;
        }
        printf("\n");
        linhas++;
    }
///////////////////////////////////////////////////
return 0;
}

