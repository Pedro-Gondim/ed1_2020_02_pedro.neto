#include <stdio.h>

int main()
{
    printf("<< Listando um vetor de numeros pares>>\n");
    int vetor = 5;
    int num[vetor];
    for (vetor = 1; vetor <= 6; vetor++)
    {
        printf("Entre com o número %d:", vetor);
        scanf("%d", &num[vetor - 1]);
        if ((num[vetor - 1] % 2) != 0)
        {
            printf("Erro: Valor inválido\n");
            vetor--;
        }
    }
    printf("\n\nOs números pares digitados foram:");
    for (vetor = 0; vetor <= 5; vetor++)
        printf(" %d", num[vetor]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
O programa deve somente aceitar números pares. 
Dica: é melhor usar loop *while* para ler os números

Exemplo de saída:
<< Listando um vetor de numeros pares>>
Entre com o numero 1: 5
Erro: Valor invalido

Entre com o numero 1: 6
Entre com o numero 2: 4
Entre com o numero 3: 0
Entre com o numero 4: 3
Erro: Valor invalido

Entre com o numero 4: 6
Entre com o numero 5: -1
Erro: Valor invalido

Entre com o numero 5: 2
Entre com o numero 6: 50

Os numeros pares digitados foram: 6 4 0 6 2 50
*/
