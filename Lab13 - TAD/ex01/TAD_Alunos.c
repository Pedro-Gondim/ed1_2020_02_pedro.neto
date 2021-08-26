#include "TAD_Alunos.h"
#include <stdio.h>

int novo_aluno(aluno* naluno){
    printf("Digite o nome: ");
    scanf(" %[^\n]",&naluno->nome);
    printf("Digite a matricula: ");
    scanf("%u",&naluno->matricula);
    printf("Digite o CRA: ");
    scanf("%f",&naluno->CRA);

    return 0;
}