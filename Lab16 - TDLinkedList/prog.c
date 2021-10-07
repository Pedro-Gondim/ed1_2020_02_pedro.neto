#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "TDLinkedList.h"

int main(){
    TDLinkedList *alunos_pet;
    alunos_pet = list_create();
    TDLinkedList *alunos_pet_front;
    alunos_pet_front = list_create();
    int matricula;
    char nome[30];
    float n1, n2, n3;

    struct aluno aluno;
    int ret;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Dados do alunos:");
        scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

        aluno.matricula = matricula;
        strcpy(aluno.nome, nome);
        aluno.n1 = n1;
        aluno.n2 = n2;
        aluno.n3 = n3;

        ret=list_push_back(alunos_pet, aluno);
        ret =list_push_front(alunos_pet_front,aluno);
        
    }
    list_print_forward(alunos_pet);
    list_print_forward(alunos_pet_front);

    list_pop_back(alunos_pet);
    list_pop_front(alunos_pet_front);
    
    list_find_pos(alunos_pet,4,&aluno);
    ret=list_push_back(alunos_pet, aluno);
    ret =list_push_front(alunos_pet_front,aluno);
    list_find_mat(alunos_pet,3,&aluno);
    ret=list_push_back(alunos_pet, aluno);
    ret =list_push_front(alunos_pet_front,aluno);

    list_print_forward(alunos_pet);
    list_print_forward(alunos_pet_front);

    list_erase(alunos_pet,4);
    list_erase(alunos_pet_front,3);

    list_print_forward(alunos_pet);
    list_print_forward(alunos_pet_front);

    list_free(alunos_pet);
    list_free(alunos_pet_front);
    return 0;
}