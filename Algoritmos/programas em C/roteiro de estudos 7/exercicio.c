#include <stdio.h>
#include <locale.h>



int main (void){
    struct Alunos{
        char nome[50];
        float matematica;
        float fisica;
        float media;
    };


    struct Alunos alunos[5];
    int count;


    for(count = 0 ; count < 5 ; count++) {
       fflush(stdin);
       printf("\nNome do aluno %d: ", count+1);
       gets(alunos[count].nome);
       printf("Nota de matematica: ");
       scanf("%f", &alunos[count].matematica);
       printf("Nota de fisica: ");
       scanf("%f", &alunos[count].fisica);
       alunos[count].media = (alunos[count].matematica + alunos[count].fisica)/2;
    }
    printf("\nExibindo nomes e medias:\n");
    for (int i=0; i<5; i++){
        printf("ALUNO: %s\n", alunos[i].nome);
        printf("Matematica: %f\n\nFisica: %f\n\nMedia Total: %f\n\n", alunos[i].matematica, alunos[i].fisica, alunos[i].media);
    }

}
