#include <stdio.h>
#include <math.h>

int main(void)
{
    int vetor = 4, soma = 0;
    int num[vetor];
    float media = 0.0, quadrado = 0.0, soma_q = 0.0;
    double desvio = 0.0;
    printf("<<   Média e desvio-padrão >>\n");
    for (vetor = 1; vetor <= 5; vetor++)
    {
        printf("Digite o valor %d:", vetor);
        scanf("%d", &num[vetor - 1]);
        soma = soma + num[vetor - 1];
    }
    media = soma / 5.0;
    for (vetor = 1; vetor <= 5; vetor++)
    {
        quadrado = pow(num[vetor - 1] - media, 2);
        soma_q = soma_q + (quadrado);
    }
    desvio = sqrt(soma_q / 4.0);
    printf("A média é %g e o desvio-padrão é %.13lf", media, desvio);
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
