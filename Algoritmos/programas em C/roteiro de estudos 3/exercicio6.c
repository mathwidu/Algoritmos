#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    printf("digite a velocidade que o condutor est�: ");
    int velocidade;
    scanf("%d", &velocidade);

    if (velocidade <= 110 && velocidade >= 55){
        printf("O condutor est� na velocidade adequada para a via");
    }

    else {
        printf("O condutor n�o est� na velocidade adequada para a via");
    }

return 0;
}


