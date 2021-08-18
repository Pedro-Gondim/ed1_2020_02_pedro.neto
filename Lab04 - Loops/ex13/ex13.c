#include <stdio.h>

int main(void) {
    int n,i,j,cont=0;
    printf("<< Múltiplos >>\n");
    printf("Entre com o valor de n:");
    scanf("%d",&n);
    printf("Entre com o valor de i:");
    scanf("%d",&i);
    printf("Entre com o valor de j:");
    scanf("%d",&j);
    int Mult=0, contador=0;
    printf("Os múltiplos de i ou j são : ");
    while(contador<n){
        if((Mult%i)==0||(Mult%j)==0){
            printf("%d, ",Mult);
            contador++;}
        Mult++;}
    return 0;
}
