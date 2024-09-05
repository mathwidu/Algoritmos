#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (void)
{
    setlocale (LC_ALL, "portuguese");

    printf("1. Círculo\n");
    printf("2. Quadrado\n");
    printf("3. Hexágono\n");

    int op, n, op2;

    while (n <= 0)
    {
        printf("Digite a opção desejada: \n");
        scanf("%d", &op);

        if (op == 1)
        {
            double raio;
            printf("Digite o valor para o raio do circulo: ");
            scanf("%lf", &raio);
            double areacirculo = 3.14 * (raio*raio);
            printf("%lf\n", areacirculo);
            printf("Você quer continuar calculando?\n");
            printf("1. Sim\n");
            printf("2. Não\n");
            printf("digite a opção desejada: ");
            scanf("%d", &op2);
            if (op2 == 2)
            {
                printf("Obrigado por usar meu programa!");
                n++;
            }
        }

        if (op == 2)
        {
            double lado;
            printf("Digite o valor para o lado do quadrado: ");
            scanf("%lf", &lado);
            double areaquadrado = lado*lado;
            printf("%lf\n", areaquadrado);
            printf("Você quer continuar calculando?\n");
            printf("1. Sim\n");
            printf("2. Não\n");
            printf("digite a opção desejada: ");
            scanf("%d", &op2);
            if (op2 == 2)
            {
                printf("Obrigado por usar meu programa!");
                n++;
            }
        }

        if (op == 3)
        {
            double lad;
            printf("Digite o valor para o lado do hexagono: ");
            scanf("%lf", &lad);
            double areahexagono = (3*(lad*lad)*sqrt(3))/2;
            printf("%lf\n", areahexagono);
            printf("Você quer continuar calculando?\n");
            printf("1. Sim\n");
            printf("2. Não\n");
            printf("digite a opção desejada: ");
            scanf("%d", &op2);
            if (op2 == 2)
            {
                printf("Obrigado por usar meu programa!");
                n++;
            }

        }

    }
    return 0;



}
