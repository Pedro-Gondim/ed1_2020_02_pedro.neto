#include <stdio.h>
#include "TLinkedList.h"
#include <stdlib.h>

typedef struct list_node list_node;

struct list_node
{
    struct aluno data;
    list_node *next;
};

struct TLinkedList
{
    list_node *head;
};

TLinkedList *list_create()
{
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

int list_push_front(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;

        list->head = node;
        return SUCCESS;
    }
}

int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = NULL;

        if (list->head == NULL)
        {
            list->head = node;
        }
        else
        {
            list_node *aux;
            aux = list->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}

int list_print(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;
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
}

int list_free(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;

        while (aux != NULL)
        {
            list->head = aux->next;
            // list->head = list->head->next;  (outra opção)
            free(aux);
            aux = list->head;
        }
        // segunda forma
        // while (list->head != NULL)
        // {
        //     aux = list->head;
        //     list->head = list->head->next;
        //     free(aux);
        // }

        free(list);
        return SUCCESS;
    }
}

int list_insert_sorted(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;

        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL) && curr->data.matricula < al.matricula)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL)  // insere na cabeça (lista vazia ou não)
        {
            node->next = list->head;
            list->head = node;
        }
        else
        {// insere a partir do segundo elemento (incluso)
            prev->next = node;
            node->next = curr;
        }
        return SUCCESS;
    }
}

int list_size(TLinkedList* list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        int count = 0;
        list_node* aux;
        aux = list->head;
        while(aux != NULL){
            aux = aux->next;
            count++;
        }
        return count;
    }
};

int list_pop_front(TLinkedList* list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    aux = list->head->next;
    free(list->head);
    list->head = aux;
    return SUCCESS;

};

int list_pop_back(TLinkedList* list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    if(list->head->next == NULL){
        free(list->head);
        list->head = NULL;
        return SUCCESS;
    }
    list_node* aux;
    list_node* aux_prev = NULL;
    aux = list->head;
    while(aux->next != NULL){
        aux_prev = aux;
        aux = aux->next;
    }
    free(aux);
    aux_prev->next = NULL;
    return SUCCESS;

};

int list_erase_data(TLinkedList* list, int mat){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    list_node* aux_prev = NULL;
    aux = list->head;
    if(list->head->data.matricula == mat && list->head->next == NULL){
        free(list->head);
        list->head = NULL;
        return SUCCESS;
    }
    if(list->head->data.matricula == mat && list->head->next != NULL){
        aux = aux->next;
        free(list->head);
        list->head = aux;
        return SUCCESS;
    }
    while(aux->data.matricula != mat && aux->next != NULL ){
        aux_prev = aux;
        aux = aux->next;
    }
    if(aux->data.matricula != mat && aux->next == NULL){
        return ELEM_NOT_FOUND;
    }
    if(aux->data.matricula == mat && aux->next == NULL){
        aux_prev->next = NULL;
        free(aux);
        return SUCCESS;
    }
    aux_prev->next = aux->next;
    free(aux);
    return SUCCESS;

};

int list_erase_pos(TLinkedList* list, int pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL || pos <= 0){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    list_node* aux_prev = NULL;
    aux = list->head;
    int count = 1 ;
    while(count < pos && aux->next != NULL ){
        aux_prev = aux;
        aux = aux->next;
        count++;
    }
    if(pos == 1 ){
        free(list->head);
        list->head = NULL;
        return SUCCESS;
        
    }
    if(count != pos && aux->next == NULL){
        return ELEM_NOT_FOUND;
    }
    if(count == pos && aux->next == NULL){
        aux_prev->next = NULL;
        free(aux);
        return SUCCESS;
    }
    aux_prev->next = aux->next;
    free(aux);
    return SUCCESS;

};

int list_find_pos(TLinkedList* list, int pos, struct aluno* al ){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL || pos <= 0){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    aux = list->head;
    int count = 1;
    while(count < pos && aux->next != NULL ){
        aux = aux->next;
        count++;
    }
    if(count != pos && aux->next == NULL){
        return ELEM_NOT_FOUND;
    }
    *al = aux->data;
    return SUCCESS;
};

int list_find_mat(TLinkedList* list, int mat, struct aluno* al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    aux = list->head;
    while(aux->data.matricula != mat && aux->next != NULL ){
        aux = aux->next;
    }
    if(aux->data.matricula != mat && aux->next == NULL){
        return ELEM_NOT_FOUND;
    }
    *al = aux->data;
    return SUCCESS;

};

int list_front(TLinkedList* list,struct aluno* al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    *al = list->head->data;
    return SUCCESS;
};

int list_back(TLinkedList* list, struct aluno* al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    aux = list->head;
    while(aux->next !=NULL){
        aux = aux->next;
    }
    *al = aux->data;
    return SUCCESS;

};

int list_get_pos(TLinkedList* list, int mat, int* pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->head == NULL){
        return OUT_OF_RANGE;
    }
    list_node* aux;
    aux = list->head;
    int count = 0;
    while(aux->data.matricula != mat && aux->next != NULL ){
        aux = aux->next;
        count++;
    }
    if(aux->data.matricula != mat && aux->next == NULL){
        return ELEM_NOT_FOUND;
    }
    *pos = count;
    return SUCCESS;
};