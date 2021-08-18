#include <stdio.h>
#include <limits.h>

int main(void)
{
    int vetor = 4, maior = INT_MIN;
    int num[vetor];
    printf("<<Normalizando as notas>>\n");
    for (vetor = 1; vetor <= 5; vetor++)
    {
        printf("Entre com a nota do aluno %d:", vetor);
        scanf("%d", &num[vetor - 1]);
        if (num[vetor - 1] > maior)
            maior = num[vetor - 1];
    }
    printf("\nNotas normalizadas");
    for (vetor = 1; vetor <= 5; vetor++)
    {
        printf("\nA nota do aluno %d é %d", vetor, (num[vetor - 1] * 100) / maior);
    }
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/