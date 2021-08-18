#include <stdio.h>

int main(void)
{
    int vetor = 5;
    int num[vetor];
    printf("<< Zerando negativos >>\n");
    for (int cont = 0; cont < vetor; cont++)
    {
        printf("Entre com o número %d:", cont + 1);
        scanf("%d", &num[cont]);
        if (num[cont] < 0)
            num[cont] = 0;
    }
    printf("Zerando os negativos, obtém-se:");
    for (int cont = 0; cont < vetor; cont++)
        printf(" %d", num[cont]);
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/