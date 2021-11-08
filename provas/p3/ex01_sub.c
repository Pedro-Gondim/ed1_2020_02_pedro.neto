/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/
int list_erase_max_nota_n1(TDLinkedList *li){
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (li->size == 0 || li->begin == NULL)
    {
        return OUT_OF_RANGE;
    }
    float temp = li->begin->data.n1;
    DLNode* aux = li->begin;
    for(int i = 1;i<li->size;i++){
        if(aux->data.n1 > temp){
            temp = aux->data.n1;                        // temp guarda o maior valor
        }
        aux= aux->next;
    }

    aux = li->begin;
    for(int i = 0;i<li->size ;i++){
        if(aux->data.n1 == temp){
            aux->prev->next = aux->next;                  // apaga o aluno com n1 igual a temp
            aux->next->prev = aux->prev;
            free(aux);
        }
        aux= aux->next;
        
    }
    return SUCCESS;
}