#include <stdio.h>

int main(void){
    printf("<<  Valor do Produto com imposto >>\n");
    float inicial_v, final_v;
    unsigned int f;
    printf("Digite o valor do produto R$: ");
    scanf("%f",&inicial_v);
    printf("Digite a unidade da federação:");
    scanf("%u",&f);
    switch (f)
    {
    case 1:
        final_v = inicial_v * 1.07;
        printf("Valor final com impostos R$: %.2f", final_v);
        break;
    case 2:
        final_v = inicial_v * 1.12;
        printf("Valor final com impostos R$: %.2f", final_v);
        break;
    case 3:
        final_v = inicial_v * 1.15;
        printf("Valor final com impostos R$: %.2f", final_v);
        break;
    case 4:
        final_v = inicial_v * 1.08;
        printf("Valor final com impostos R$: %.2f", final_v);
        break;   
    default:
        printf("Erro: unidade de federação não valído\n");
        break;
    }
    return 0;
}