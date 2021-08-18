#include <stdio.h>
#include <limits.h>

int main(void)
{
    int vetor = 4, menor = INT_MAX, maior = INT_MIN, soma = 0;
    int num[vetor];
    int maior_posicao, menor_posicao;
    float media = 0;
    printf("<< Five Values with index >>\n");
    for (vetor = 1; vetor <= 5; vetor++)
    {
        printf("Input #%d:", vetor);
        scanf("%d", &num[vetor - 1]);
        soma = soma + num[vetor - 1];
        if (num[vetor - 1] < menor)
        {
            menor = num[vetor - 1];
            menor_posicao = vetor - 1;
        }
        if (num[vetor - 1] > maior)
        {
            maior = num[vetor - 1];
            maior_posicao = vetor - 1;
        }
    }
    printf("The numbers entered are:");
    for (vetor = 0; vetor <= 4; vetor++)
        printf(" %d", num[vetor]);
    printf("\nMax. Value: %d, index %d of the array", maior, maior_posicao);
    printf("\nMin. Value: %d, index %d of the array", menor, menor_posicao);
    media = soma / 5.0;
    printf("\nMean: %.1f", media);

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/