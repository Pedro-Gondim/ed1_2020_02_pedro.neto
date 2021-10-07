#include <stdlib.h>
#include <stdio.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;

struct TDLinkedList
{
    DLNode* begin;
    DLNode* end;
    int size;
};

struct DLNode
{
    struct aluno data;
    DLNode* next;
    DLNode* prev;
};

TDLinkedList *list_create(){
    TDLinkedList *list;
    list = malloc(sizeof(TDLinkedList));
    if (list != NULL)
    {
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
};

int list_free(TDLinkedList *list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *aux;
        aux = list->begin;

        while (aux != NULL)
        {
            list->begin = aux->next;
            free(aux);
            aux = list->begin;
        }
        free(list);
        return SUCCESS;
    }
};

int list_push_front(TDLinkedList *list, struct aluno al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL){
        DLNode* node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->prev = NULL;
        node->next = NULL;
        list->begin = node;
        list->end = node;
        list->size++;        
        return SUCCESS;
    }
    DLNode* node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->prev = NULL;
        node->next = list->begin;
        list->begin->prev = node;
        list->begin = node;
        list->size++;        
        return SUCCESS;
};

int list_push_back(TDLinkedList* list,struct aluno al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(list->end == NULL){
        DLNode* node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->prev = NULL;
        node->next = NULL;
        list->begin = node;
        list->end = node;
        list->size++;        
        return SUCCESS;
    }
    DLNode* node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->prev = list->end;
        node->next = NULL;
        list->end->next = node;
        list->end = node;
        list->size++;
        return SUCCESS;
};

int list_insert(TDLinkedList *list, int pos, struct aluno al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(pos > (list->size+1) || pos <=0){
        return OUT_OF_RANGE;
    }
    DLNode* aux = list->begin;
    for(int i = 0;i < pos-1 && aux != NULL; i++)
        aux = aux->next;
    if(aux == NULL && pos == 1){
        DLNode* node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->prev = NULL;
        node->next = NULL;
        list->begin = node;
        list->end = node;
        list->size++;        
        return SUCCESS;
    }
    DLNode* node;
    node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
    node->data = al;
    node->next = aux->next;
    node->prev = aux;
    node->next->prev = node;
    node->prev->next = node;
    list->size++;
    return SUCCESS;
};

int list_size(TDLinkedList* list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    return list->size;
};

int list_pop_front(TDLinkedList* list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (list->size == 0)
    {
        return OUT_OF_RANGE;
    }
    if(list->begin == list->end){
        free(list->begin);
        list->begin = NULL;
        list->end = NULL;
        list->size--;
        return SUCCESS;
    }
    DLNode* aux = list->begin->next;
    aux->prev = NULL;
    free(list->begin);
    list->begin = aux;
    list->size--;
    return SUCCESS;
};

int list_pop_back(TDLinkedList* list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (list->size == 0)
    {
        return OUT_OF_RANGE;
    }
    if(list->begin == list->end){
        free(list->end);
        list->begin = NULL;
        list->end = NULL;
        list->size--;
    }
    DLNode* aux = list->end->prev;
    aux->next = NULL;
    free(list->end);
    list->end = aux;
    list->size--;
    return SUCCESS;
};

int list_erase(TDLinkedList* list,int pos){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (list->size == 0 || pos > list->size)
    {
        return OUT_OF_RANGE;
    }
    if(list->size == 1 && pos == 1){
        free(list->begin);
        list->begin = NULL;
        list->end = NULL;
        list->size--;
        return SUCCESS;
    }
    int i = 1;
    DLNode* aux = list->begin;
    for(;i<pos;i++){
        aux = aux->next;
    }
    aux->prev = aux->next;
    aux->next = aux->prev;
    free(aux);
    list->size;
    return SUCCESS;
};

int list_find_pos(TDLinkedList* list, int pos, struct aluno* al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (list->size == 0 || pos > list->size)
    {
        return OUT_OF_RANGE;
    }
    int i = 1;
    DLNode* aux = list->begin;
    for(;i<pos;i++){
        aux = aux->next;
    }
    *al = aux->data;
    return SUCCESS;
};

int list_find_mat(TDLinkedList* list, int mat, struct aluno* al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (list->size == 0)
    {
        return OUT_OF_RANGE;
    }
    int i = 1;
    DLNode* aux = list->begin;
    for(;i<list->size && mat != aux->data.matricula;i++){
        aux = aux->next;
    }
    *al = aux->data;
    return SUCCESS;
};

int list_front(TDLinkedList* list, struct aluno* al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL){
        return OUT_OF_RANGE;
    }
    *al = list->begin->data;
    return SUCCESS;
};

int list_back(TDLinkedList* list, struct aluno* al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(list->end == NULL){
        return OUT_OF_RANGE;
    }
    *al = list->end->data;
    return SUCCESS;
};

int list_get_pos(TDLinkedList* list, int mat,int* pos){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL){
        return OUT_OF_RANGE;
    }
    int i = 1;
    DLNode* aux = list->begin;
    for(;i<list->size && mat != aux->data.matricula;i++){
        aux = aux->next;
    }
    *pos = i;
    return SUCCESS;
};

int list_print_forward(TDLinkedList *list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *aux;
        aux = list->begin;
        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
};

int list_print_reverse(TDLinkedList *list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *aux;
        aux = list->end;
        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->prev;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
};
