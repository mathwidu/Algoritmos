#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    for (int linha = n; linha >= 1; linha--) {
        for (int asteriscos = 1; asteriscos <= linha; asteriscos++) {
            printf("*#");
        }
        printf("\n");
    }

    return 0;
}

