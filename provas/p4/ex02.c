/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
(a) mostrar como fica a estrutura do TAD
(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?
// responder aqui:
O vetor não consegue identificar o seu incio apartir do final, enquanto que em uma lista circular isso é possivel
// check:<<<erro: não é isso que foi pedido>>>>
*/

//a)

typedef struct circlist CircList;
typedef struct clistnode CList_node;
struct circlist{
    CList_node* end;
    CList_node* next;
};

struct clistnode
{
    struct aluno dado;
    CList_node* prox;
};

//b)
CList_node* circlist_next(CircList* li){
    CList_node* out
    if(li == NULL)
        return 0;
    if(li->next == NULL) // Se não iniciado, inicia pela cabeça da lista
        li->next = li->end->prox;
    out = li->next;
    li->next = li->next->prox;
    return out;
}   

// check:<<<erro: faltou teste de lista vazia>>>>
// check:<<<erro: não retornou o tipo de dado esperado >>>>
