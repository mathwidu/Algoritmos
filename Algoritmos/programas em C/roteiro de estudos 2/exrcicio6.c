# include <stdio.h>
# include <locale.h>

int main () {
    int suaidade;

    setlocale(LC_ALL,"");

    printf("qual sua idade?");
    scanf("%d", &suaidade);


    int idademeses = suaidade * 12;

    printf("sua idade em meses � %d (meses)", idademeses);

    int idadeparente;

    printf("qual a idade de um parente seu? (ex.: pai, m�e, etc...)?");
    scanf("%d", &idadeparente);

    double vezesidade = (double)suaidade / idadeparente;

    printf("sua idade � %f vezes a do seu parente", vezesidade);

    return 0;
}
