#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
typedef struct Livro Livro;
struct Livro{
    char nome[40];
    float preco;
    int indicacao;
    int ano;
};

struct lista{
    Livro* livros;
    int qnt;
};


// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

// check:<<<erro: não fez o exercício>>>>
int buscar(struct lista* li){
    int ano_b = 99999;
    int indice = 0;
    for(int i =0;i<li->qnt;i++){
        if(li->livros[i].indicacao == 2){
            if(li->livros[i].ano < ano_b){
                indice = i;
                ano_b = li->livros[i].ano;
            }
        }
    }
    return indice;
}


int main(){

   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)

   int num;
    char conf;
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d",&num);
    fflush(stdin);
    struct lista* li;
    li = malloc(sizeof(struct lista)*num);
    if(li == NULL)
        return -1;
    li->qnt = num;
    for(int i = 0; i< num;i++){
        printf("digite o nome do livro: ");
        scanf("%[^\n]",li->livros[i].nome);
        fflush(stdin);
        printf("Digite o preco: ");
        scanf("%f",&li->livros[i].preco);
        fflush(stdin);
        printf("Digite 1 para um livro Novo ou 2 para Usado: ");
        scanf("%d",&li->livros[i].indicacao);
        fflush(stdin);
        printf("Digite o ano: ");
        scanf("%d",&li->livros[i].ano);
        fflush(stdin);
       }

    int indice = buscar(li);
    printf("Livro usado mais antigo: \n");
    printf("%s",li->livros[indice].nome);
    
     free(li);
    return 0;
}