# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h>
int numero;
int antecessor;
int sucessor;

int main() {
    printf("digite um número:",setlocale(LC_ALL,""));
    scanf("%d",&numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("o sucessor do seu número é: %d\n", sucessor);
    printf("o antecessor do seu número é: %d", antecessor);

}
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h>
int numero;
int antecessor;
int sucessor;


    printf("digite um número:",setlocale(LC_ALL,""));
    scanf("%d",&numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("o sucessor do seu número é: %d\n", sucessor);
    printf("o antecessor do seu número é: %d", antecessor);
    return 0;
}
