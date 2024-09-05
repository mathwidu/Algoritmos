#include <stdio.h>
#include <locale.h>
void leia(char *op) {
    setlocale(LC_ALL, "portuguese");
    printf("Opção 1: +\nOpção 2: -\nOpção 3: *\nOpção 4: / \n");
    printf("Digite a operação desejada: ");
    scanf(" %c", op);
}

int soma (int a, int b){
return a + b;
}
int subtracao (int a, int b){
return a - b;
}
void divisao (int a, int b){
if (b!=0){
    double resultado =(double)a/b;
    printf("divisão: %lf\n", resultado);
} else {
    printf("Divisão por zero não é permitida.\n");
}
}

void multi(int a, int b, int *total) {
    *total = a * b;
}

int main()
{

    int a, b, total;

    char op;

    printf("Informe um inteiro:");

    scanf("%d",&a);

    printf("Informe outro inteiro:");

    scanf("%d",&b);

    leia(&op);

    switch(op)
    {

    case '+':
        printf("Soma: %d\n",soma(a,b));

        break;

    case '-':
        total = subtracao(a,b);

        printf("Subtracao: %d\n",total);

        break;

    case '*':
        multi(a,b,&total);

        printf("Multiplicacao: %d\n",total);

        break;

    case '/':
        divisao(a,b);

        break;

    default:
        printf("Opcao invalida\n");

    }

}
