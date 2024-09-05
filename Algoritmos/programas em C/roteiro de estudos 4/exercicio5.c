#include <stdio.h>
#include <locale.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main (void) {
    setlocale(LC_ALL, "portuguese");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("Quantos alunos tem no modulo? ");
    int alunos;
    scanf("%d", &alunos);
    while (alunos < 0){
        printf("ERRO número de alunos invalido\n");
        printf("Digite um número valido para alunos: ");
        scanf("%d", &alunos);
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("Quantas aulas tem o modulo? ");
    int aulas;
    scanf("%d", &aulas);
    while (aulas < 0){
        printf("ERRO número de aulas invalido\n");
        printf("Digite um valor valido para aulas: ");
        scanf("%d", &aulas);
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int alunosnotas = 1;
    int aprovados = 0;
    double media;
    int reprovadonota = 0;
    int reprovadofalta = 0;
    int nota1, nota2, nota3;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    do{
        printf("digite a primeira nota do aluno %d: ", alunosnotas);
        scanf("%d", &nota1);
            while (nota1 < 0 || nota1 > 10){
                printf("\aERRO nota invalida...\n");
                printf("digite uma nota valida: ");
                scanf("%d", &nota1);
            }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        printf("digite a segunda nota do aluno %d: ", alunosnotas);
        scanf("%d", &nota2);
            while (nota2 < 0 || nota2 > 10){
                printf("\aERRO nota invalida...\n");
                printf("digite uma nota valida: ");
                scanf("%d", &nota2);
            }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        printf("digite a terceira nota do aluno %d: ", alunosnotas);
        scanf("%d", &nota3);
            while (nota3 < 0 || nota3 > 10){
                printf("\aERRO nota invalida...\n");
                printf("digite uma nota valida: ");
                scanf("%d", &nota3);
            }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        printf("digite o numero de faltas do aluno %d: ", alunosnotas);
        int faltas;
        scanf("%d", &faltas);
            while (faltas < 0){
                printf("\aERRO numero de faltas invalido...\n");
                printf("Digite um numero de faltas valido: ");
                scanf("%d", &faltas);
            }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
             if (nota1 > nota2 && nota2 > nota3) {
                media = (nota1 + nota2) / 2.0;
    }   else if (nota1 > nota2 && nota2 < nota3) {
                media = (nota1 + nota3) / 2.0;
    }   else if (nota2 > nota1 && nota3 > nota1) {
                media = (nota2 + nota3) / 2.0;
    } else if (nota2 == nota1 && nota2 == nota3){
                media = (nota1 + nota2) / 2.0;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("A média do aluno %d é: %.2lf\n", alunosnotas, media);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (media < 7.0){
        reprovadonota++;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (faltas > (aulas * 0.25)){
        reprovadofalta++;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (media >= 7.0 && faltas <= (aulas * 0.25)){
        aprovados++;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    alunosnotas++;
    }while(alunosnotas <= alunos);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    double porcentreprovadonota = (reprovadonota * 100.0) / alunos;
    printf("A porcentagem dos alunos reprovados por nota é: %.2lf\n", porcentreprovadonota);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    double porcentreprovadofalta = (reprovadofalta * 100.0) / alunos;
    printf("A porcentagem dos alunos reprovados por falta é: %.2lf\n", porcentreprovadofalta);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    double porcentaprovados = (aprovados * 100.0) / alunos;
    printf("A porcentagem dos alunos aprovados é: %.2lf", porcentaprovados);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
