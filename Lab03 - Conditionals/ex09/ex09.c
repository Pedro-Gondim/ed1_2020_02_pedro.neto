#include <stdio.h>

int main(void){
    printf("<<  Valor de comissão  >>\n");
    float inicial_venda, comiss;
    printf("Digite o valor das vendas:R$ ");
    scanf("%f",&inicial_venda);
    if(inicial_venda >= 100000.00){comiss = 700 + (0.16*inicial_venda);}
    if(inicial_venda < 100000.00 && inicial_venda >= 80000.00){comiss = 650 + (0.14*inicial_venda);}
    if(inicial_venda < 80000.00 && inicial_venda >= 60000.00){comiss = 600 + (0.14*inicial_venda);}
    if(inicial_venda < 60000.00 && inicial_venda >= 40000.00){comiss = 550 + (0.14*inicial_venda);}
    if(inicial_venda < 40000.00 && inicial_venda >= 20000.00){comiss = 500 + (0.14*inicial_venda);}
    if(inicial_venda < 20000.00){comiss = 400 + (0.14*inicial_venda);}
    printf("Comissão a ser paga: R$ %.2f",comiss);
    return 0;
}