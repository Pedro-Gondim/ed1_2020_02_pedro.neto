#include <stdio.h>
#include "TAD_Alunos.c"

int main()
{
    aluno* pointer;
    aluno a[4];
    pointer = a;
    
    for (int i = 0; i < 4; i++)
    {
        novo_aluno(pointer++);
    }

    printf("\nAlunos Cadastrados:\n");
    for (int i = 0; i < 4; i++){
        printf("\nAluno: %s\nMatricula: %u\nCRA: %.2f\n\n", a[i].nome,a[i].matricula,a[i].CRA);
   }

   return 0;
}