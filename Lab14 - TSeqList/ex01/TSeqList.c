#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h" //inclui os Protótipos

//Definição do tipo lista
struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li; 
}

int libera_lista(Lista* li)
{
    if(li != NULL)
    {
        free(li);
        return 0;
    }
    return li;
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al)
{
    if (li == NULL)
        return -1;
    if (pos <=0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}
int consulta_lista_mat(Lista* li, int mat, struct aluno *al)
{
    if(li == NULL)
    {
        return -1;
    }
    int c_mat;
    for(int i = 0; i<li->qtd;i++)
    {
        c_mat = li->dados[i].matricula;
        if(c_mat == mat)
        {
            *al = li->dados[i];
            return 0;
        }
    }
    return -1; // caso  saia do for; matricula não encontrada
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}


int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    // deslocando os elementos
    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    li->qtd++;
    return 0;
}

int insere_lista_ordenada(Lista* li, struct aluno al)
{
    if(li == NULL || li->qtd == MAX)
    {
        return -1;
    }
    int i =li->dados[0].matricula;
    int cont = 0;
    while(i<al.matricula && cont < li->qtd-1)
    {
        cont++;
        i = li->dados[cont].matricula;
    }
    for(int j = li->qtd-1; j>= cont;j--)
    {
        li->dados[j+1] = li->dados[j];
    }
    li->dados[cont]= al;
    li->qtd++;
    return 0;
}
int remove_lista(Lista* li, int mat){
    if (li == NULL)
        return -1;
    if (li->qtd == 0) //lista vazia
        return -1;

    int c_mat;
    int i;
    for( i = 0; i<li->qtd && c_mat!= mat;)
        i++;
    if(i == li->qtd){   //item não encontrado
        return -1;
        }
    while(i<li->qtd-1){
                li->dados[i] = li->dados[i+1];
                i++;
        }       
    li->qtd--;
    return 0;
};
int remove_lista_inicio(Lista* li){
    if (li == NULL)
        return -1;
    if (li->qtd == 0) //lista vazia
        return -1;
    int i;
    for( i = 0; i<li->qtd-1;i++)
    {
        li->dados[i] = li->dados[i+1];
    }
    li->qtd--;
    return 0;
};
int remove_lista_final(Lista* li){
    if (li == NULL)
        return -1;
    if (li->qtd == 0) //lista vazia
        return -1;
    li->qtd--;
    return 0;
};
int tamanho_lista(Lista* li){
    if (li == NULL)
        return -1;
    return li->qtd;
};
int lista_cheia(Lista* li){
    if (li == NULL)
        return -1;
    if(li->qtd == MAX){
        return 1;
    }
    return 0;
};
int lista_vazia(Lista* li){
    if (li == NULL)
        return -1;
    if(li->qtd == 0){
        return 1;
    }
    return 0;
};

int imprime_lista(Lista *li)
{
    if (li == NULL)
        return -1;

    for (int i = 0; i < li->qtd; i++)
    {
        printf("\nMatricula: %d\n", li->dados[i].matricula);
        printf("\nNome: %s\n", li->dados[i].nome);
        printf("Notas: %f;%f;%f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }

    return 0;
}

int remove_lista_otimizado(Lista* li, int mat){

};
