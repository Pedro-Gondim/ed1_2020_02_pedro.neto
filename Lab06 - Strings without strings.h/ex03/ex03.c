#include <stdio.h>

int main(void) {
    char c;
    char nome[50];
    int ascii[50];
    int i, pos; // pos - guarda a posição atual no vetor

    pos = 0;
    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");
    c = getchar(); // busca uma letra no buffer
    while (c != '\n') {  // fica no loop enquanto nao encontrar um ENTER
        nome[pos] = c;
        ascii[pos]=nome[pos];
        if(ascii[pos]>97)
        ascii[pos]=ascii[pos]-32;
        pos++;
        c = getchar(); // consome o próximo caractere do buffer
        
    }
    printf("O nome digitado é: ");
    for (i=0; i < pos; i++){
        printf("%c", ascii[i]);
    }
}