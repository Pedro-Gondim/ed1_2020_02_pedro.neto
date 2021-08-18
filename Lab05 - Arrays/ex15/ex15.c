#include <stdio.h>

int main(void)
{
    int vetor = 8;
    int num[vetor];
    int repetidos[vetor / 2];
    int cont = 0;
    printf("<< Valores iguais >>\n");
    for (int cont = 0; cont < vetor; cont++)
    {
        printf("Entre com o número %d:", cont + 1);
        scanf("%d", &num[cont]);
    }
    for (int verificado = 0, repeticoesN = 0, repeticoesR = 0; verificado < vetor; verificado++)
    {
        for (int verificador = 0; verificador < vetor; verificador++)
        {
            if (num[verificado] == num[verificador])
                repeticoesN++;
        }

        for (int verificador = 0; verificador < vetor / 2; verificador++)
        {
            if (repetidos[verificador] == num[verificado])
                repeticoesR++;
        }

        if ((repeticoesN > 1) && (repeticoesR == 0))
        {
            repetidos[cont] = num[verificado];
            cont++;
        }
        repeticoesN = 0;
        repeticoesR = 0;
    }
    printf("Valores repetidos:");
    for (int i = 0; i < cont; i++)
    {
        printf("%d,", repetidos[i]);
    }
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/