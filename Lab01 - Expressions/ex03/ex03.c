#include <stdio.h>

int main() {
    int N;
    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero: ");
    scanf("%d",&N);
    printf("\nAntecessor: %d\nNumero: %d\nSucessor: %d",N-1,N,N+1);

}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/