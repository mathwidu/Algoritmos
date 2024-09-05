#include <stdio.h>
#include <locale.h>
#include <time.h>
int main (void){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int matriz[4][3], i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            //matriz[i][j] = rand() % 11;
        }
    }

    int menorlinhas[4];
    for (int y = 0; y < 4; y++) {
        menorlinhas[y] = matriz[y][0];
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < menorlinhas[i]) {
                menorlinhas[i] = matriz[i][j];
            }
        }
    }

    int maiorcolunas[3];
    for (int y = 0; y < 3; y++) {
        maiorcolunas[y] = matriz[0][y];
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maiorcolunas[j]) {
                maiorcolunas[j] = matriz[i][j];
            }
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Menor elemento de cada linha:\n");
    for (i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i, menorlinhas[i]);
    }

    printf("Maior elemento de cada coluna:\n");
    for (j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j, maiorcolunas[j]);
    }

    return 0;
}
