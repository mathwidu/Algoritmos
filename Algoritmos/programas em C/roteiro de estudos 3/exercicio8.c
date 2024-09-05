#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    printf("Qual a temperatura que o ouro ira ser submetido? ");
    double touro; //varialvel
    scanf("%lf", &touro);

    if (touro >= 1064 && touro <= 2856){
        printf("nessa temperatura o ouro estara liquido\n");
    }
    if (touro > 2856){
        printf("nessa temperatura o ouro estara em estado gasoso\n");
    }
    else {
        printf("nessa temperatura o ouro estara solido");
    }









}
