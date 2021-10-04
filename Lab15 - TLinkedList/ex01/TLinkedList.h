#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create();                                         //ok
int list_free(TLinkedList *list);                                   //ok
int list_push_front(TLinkedList *list, struct aluno al);            //ok
int list_push_back(TLinkedList *list, struct aluno al);             //ok
int list_insert_sorted(TLinkedList *list, struct aluno al);         //ok
int list_size(TLinkedList* list);                                   //ok
int list_pop_front(TLinkedList* list);                              //ok
int list_pop_back(TLinkedList* list);                               //ok
int list_erase_data(TLinkedList* list, int mat);                    //ok
int list_erase_pos(TLinkedList* list, int pos);                     //ok
int list_find_pos(TLinkedList* list, int pos, struct aluno* al );   //ok  
int list_find_mat(TLinkedList* list, int mat, struct aluno* al);    //ok
int list_front(TLinkedList* list,struct aluno* al);                 //ok
int list_back(TLinkedList* list, struct aluno* al);                 //ok
int list_get_pos(TLinkedList* list, int mat, int* pos);             //ok
int list_print(TLinkedList *list);                                  //ok

