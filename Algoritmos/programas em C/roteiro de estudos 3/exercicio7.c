#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    printf("Digite o valor da compra: ");
    double vcompra;
    scanf("%lf", &vcompra);

    printf("Digite o valor entregue ao caixa: ");
    double vpago;
    scanf("%lf", &vpago);

    double troco = vpago - vcompra;

    if (vcompra <= vpago){
        printf("O valor do troco �: R$%.2lf", troco);
    }

    else {
        printf("O valor pago n�o � suficiente");
    }

return 0;
}

