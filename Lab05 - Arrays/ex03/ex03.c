#include <stdio.h>

int main()
{
    printf("<< Listando um vetor em ordem inversa !!! >>\n");
    int vetor = 5;
    int num[vetor];
    for (vetor = 1; vetor <= 6; vetor++)
    {
        printf("Entre com o número %d:", vetor);
        scanf("%d", &num[vetor - 1]);
    }
    printf("A ordem inversa dos números é:");
    for (vetor = 5; vetor >= 0; vetor--)
        printf(" %d", num[vetor]);
}

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
