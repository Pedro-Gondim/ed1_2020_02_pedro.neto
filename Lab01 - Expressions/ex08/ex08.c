#include <stdio.h>

int main() {
    int dias;
    float valorB, valorL, iss, ir;
    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d",&dias);
    valorB = dias  * 30.00;
    iss = valorB * 0.04;
    ir = (valorB-iss) * 0.08;
    valorL = valorB - iss - ir;
    printf("Valor bruto R$: %g\n",valorB);
    printf("Valor liquido R$: %g\n",valorL);
    printf("ISS R$: %g\n",iss);
    printf("IR R$: %g\n",ir);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/