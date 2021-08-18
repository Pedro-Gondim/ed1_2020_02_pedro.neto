#include <stdio.h>
#include <math.h>

int main(void) {
    int bits;
    printf("<< Conversor binário-decimal >>\n");
    printf("Entre com o número de bits: ");
    scanf("%d",&bits);
    int bit[bits];
    int soma_bit=0;
    double potencia=bits-1.0;
    for(int i=1;i<=bits;i++){
        printf("Digite o bit # %d: ",i);
        scanf("%d",&bit[i]);
        soma_bit=soma_bit+(bit[i]*pow(2.00,potencia));
        potencia--;
    }
    printf("O número binário ");
    for(int i=1; i<=bits;i++)
        printf("%d",bit[i]);
    printf(" em decimal é %d", soma_bit);
    return 0;
}