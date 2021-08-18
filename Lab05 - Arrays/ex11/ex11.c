#include <stdio.h>

int main(void)
{
    int num = 5, contp = 0, conti = 0;
    int valor[num], par[num], impar[num];
    printf("<< Pares e Ímpares >>\n");
    for (int cont = 1; cont <= num; cont++)
    {
        printf("Digite o valor %d:", cont);
        scanf("%d", &valor[cont - 1]);
        if ((valor[cont - 1] % 2) == 0)
        {
            par[contp] = valor[cont - 1];
            contp++;
        }
        else
        {
            impar[conti] = valor[cont - 1];
            conti++;
        }
    }
    printf("\n\n");
    printf("Ímpares:");
    for (int cont = 0; cont < conti; cont++)
    {
        printf(" %d,", impar[cont]);
    }
    printf("\nPares:");
    for (int cont = 0; cont < contp; cont++)
    {
        printf(" %d,", par[cont]);
    }
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/