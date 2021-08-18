#include <stdio.h>
#include <limits.h>

int main()
{
    printf("<< Five Values >>\n");
    int vetor = 4, menor = INT_MAX, maior = INT_MIN, soma = 0;
    int num[vetor];
    float media = 0;

    for (vetor = 1; vetor <= 5; vetor++)
    {
        printf("Entre com o número %d:", vetor);
        scanf("%d", &num[vetor - 1]);
        soma = soma + num[vetor - 1];
        if (num[vetor - 1] < menor)
            menor = num[vetor - 1];
        if (num[vetor - 1] > maior)
            maior = num[vetor - 1];
    }
    printf("Os números digitados são:");
    for (vetor = 0; vetor <= 4; vetor++)
        printf(" %d", num[vetor]);
    printf("\nO maior valor é: %d", maior);
    printf("\nO menor valor é: %d", menor);
    media = soma / 5.0;
    printf("\nA média é: %.1f", media);
    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/