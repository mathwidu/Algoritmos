# include <stdio.h>
# include <locale.h>
/////////////////////////////////////////////////////////////////////////////
int main () {
    setlocale(LC_ALL, "");
/////////////////////////////////////////////////////////////////////////////
    printf("digite sua primeira nota: ");
    double nota1;
    scanf("%lf", &nota1);
/////////////////////////////////////////////////////////////////////////////
    printf("digite sua segunda nota:" );
    double nota2;
    scanf("%lf", &nota2);
/////////////////////////////////////////////////////////////////////////////
    printf("digite sua terceira nota: ");
    double nota3;
    scanf("%lf", &nota3);
/////////////////////////////////////////////////////////////////////////////
    int p1 = 2;
    int p2 = 3;
    int p3 = 5;
    int media = (nota1 * p1 + nota2 * p2 + nota3 * p3) / (p1 + p2 +p3);
/////////////////////////////////////////////////////////////////////////////
    if (media >= 7){
        printf("sua media �: %d e voc� est� aprovado!", media);
    }

    else {
        printf("sua media �: %d e voc� est� reprovado.", media);
    }
/////////////////////////////////////////////////////////////////////////////
return 0;
}
