#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
typedef struct Livro Livro;

struct Livro{
    char nome[40];
    float preco;
    int indicacao;
    int ano;
};
struct lista{
    Livro* livros;
};

int main(){

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros

    int num;
    char conf;
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d",&num);
    fflush(stdin);
    struct lista* li;
    li = malloc(sizeof(struct lista)*num);
    if(li == NULL)
        return -1;
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


    free(li);
    return 0;
}