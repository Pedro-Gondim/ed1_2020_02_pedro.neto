/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    TStack* pilha;
    pilha = stack_create();
    printf("Digite os caracteres a serem lidos: ");
    char c;
    int  i = 0;
    while((c = getchar()) != '\n'){
    stack_push(pilha,c);
    }
    printf("Caracteres lidos: ");
    while((i = stack_empty(pilha)) != 1){ // 0 para não vazio; 1 para vazio
    stack_top(pilha,&c);
    printf("%c",c);
    stack_pop(pilha);
    }
}