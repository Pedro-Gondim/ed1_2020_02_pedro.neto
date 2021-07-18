#include <stdio.h>

int main() {
    int dias;
    float valorB, valorL, iss, ir;
    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d",&dias);
    valorB = dias  * 30.00;
    iss = valorB * 0.04;
    ir = valorB * 0.08;
    valorL = valorB - iss - ir;
    printf("Valor bruto R$: %g\n",valorB);
    printf("Valor liquido R$: %g\n",valorL);
    printf("ISS R$: %g\n",iss);
    printf("IR R$: %g\n",ir);
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/