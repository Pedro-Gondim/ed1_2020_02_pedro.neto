#include <stdio.h>

int main()
{
    printf("<< Listando um vetor - com loops >>\n");
    int vetor = 5;
    int num[vetor];

    for (vetor = 1; vetor <= 6; vetor++)
    {
        printf("Entre com o número %d:", vetor);
        scanf("%d", &num[vetor - 1]);
    }
    printf("\n\nOs valores lidos são:");
    for (vetor = 0; vetor <= 5; vetor++)
        printf(" %d", num[vetor]);
    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
(pense qual o melhor loop: for, while ou do-while)
 
Exemplo de saída:
<< Listando um vetor - com loops >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Valores lidos: 5 6 4 0 3 6
*/
