#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void){
    setlocale(LC_ALL, "portuguese");
    printf("digite um valor para n: ");
    int n;
    scanf("%d", &n);

    int num = 1;

    for(int linha = 1;linha <= n;linha++){
        for(int coluna = 1; coluna <= linha; coluna++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
return 0;
}
