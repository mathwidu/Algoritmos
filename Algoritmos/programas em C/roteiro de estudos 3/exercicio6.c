#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    printf("digite a velocidade que o condutor está: ");
    int velocidade;
    scanf("%d", &velocidade);

    if (velocidade <= 110 && velocidade >= 55){
        printf("O condutor está na velocidade adequada para a via");
    }

    else {
        printf("O condutor não está na velocidade adequada para a via");
    }

return 0;
}


