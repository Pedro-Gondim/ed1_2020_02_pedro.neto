#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
struct Livro{
    char nome[40];
    float preco;
    int indicacao;
    int ano;
};

int main(){

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros

    int num;
    char conf;
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d",&num);
    struct Livro livros[num];
    for(int i = 0; i< num;i++){
        printf("digite o nome do livro: ");
        scanf("%s",livros[i].nome);
        printf("Digite o preco: ");
        scanf("%f",&livros[i].preco);
        printf("Digite 1 para um livro Novo ou 2 para Usado: ");
        scanf("%d",&livros[i].indicacao);
        printf("Digite o ano: ");
        scanf("%d",&livros[i].ano);

    }

  
    return 0;
}