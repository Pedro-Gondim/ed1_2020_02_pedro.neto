#include <stdio.h>
#include "TSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos_pet, *alunos_enade = NULL;
    alunos_pet = cria_lista();
    alunos_enade = cria_lista();

    int matricula;
    char nome[30];
    float n1, n2, n3;

    struct aluno aluno;
    int ret;
    
    for (int i = 0; i < 3; i++)
    {
        printf("Dados do alunos:");
        scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

        aluno.matricula = matricula;
        strcpy(aluno.nome, nome);
        aluno.n1 = n1;
        aluno.n2 = n2;
        aluno.n3 = n3;

        ret=insere_lista_ordenada(alunos_pet, aluno);
        ret =  lista_cheia(alunos_pet);
        if (ret == 1 ){
            printf("\nErro: lista cheia");
        }
       // insere_lista_final(alunos_pet, aluno);
        
        if (aluno.n1 >60){
            insere_lista_final(alunos_enade,aluno);
        }
    }

    struct aluno a;
    consulta_lista_pos(alunos_pet,1,&a);
    
    imprime_lista(alunos_pet);
    printf("\nenade\n");
    imprime_lista(alunos_enade);
    ret =  lista_vazia(alunos_enade);
        if (ret == 1 ){
            printf("\nErro: lista vazia");
        }
    //imprime_lista(alunos_enade);

    
    remove_lista_final(alunos_pet);
    remove_lista(alunos_pet,3);
    remove_lista_inicio(alunos_pet);
    imprime_lista(alunos_pet);
    ret =  lista_vazia(alunos_pet);
        if (ret == 1 ){
            printf("\nErro: A lista foi removida");
        }

    libera_lista(alunos_pet);
    libera_lista(alunos_enade);
}