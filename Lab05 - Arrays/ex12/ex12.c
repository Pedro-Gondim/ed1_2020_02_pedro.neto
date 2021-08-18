#include <stdio.h>

int main(void)
{
    char cores[4][10] = {"Verde", "Azul", "Amarela", "Vermelha"};
    float valores[3];
    float prob[3];
    float soma = 0.0;
    float maior = 0.0;
    printf("<< Probabilidades >>\n\n");
    printf("Digite a quantidade de bolinhas\n");
    for (int cont = 0; cont <= 3; cont++)
    {
        printf("%s:", cores[cont]);
        scanf("%f", &valores[cont]);
        soma = soma + valores[cont];
    }
    for (int cont = 0; cont <= 3; cont++)
    {
        prob[cont] = (valores[cont] * 100.0) / soma;
        if (prob[cont] > maior)
            maior = prob[cont];
    }
    printf("\n\nProbabilidades");
    char coresp[4][10] = {"Verde", "Azul", "Amarela", "Vermelha"};
    for (int cont = 0; cont <= 3; cont++)
    {
        printf("\n%s: %.1f%%", coresp[cont], prob[cont]);
        if (prob[cont] == maior)
            printf(" << Maior probabilidade");
    }
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/