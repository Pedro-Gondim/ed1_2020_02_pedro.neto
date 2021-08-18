#include <stdio.h>

int main(void)
{
    int num = 2;
    int A[num];
    int B[num];
    int C[num];
    printf("<< Subtração de vetores >>\n");
    for (int cont = 1; cont <= (num + 1); cont++)
    {
        printf("Digite o valor %d de A:", cont);
        scanf("%d", &A[cont - 1]);
    }
    printf("\n\n");
    for (int cont = 1; cont <= (num + 1); cont++)
    {
        printf("Digite o valor %d de B:", cont);
        scanf("%d", &B[cont - 1]);
    }
    for (int cont = 0; cont <= num; cont++)
        C[cont] = A[cont] - B[cont];
    printf("\n\nO vetor C, definido como C = A-B é (%d, %d, %d)", C[0], C[1], C[2]);
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/