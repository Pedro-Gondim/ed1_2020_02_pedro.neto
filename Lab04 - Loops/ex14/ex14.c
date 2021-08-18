#include <stdio.h>

int main(void) {
    printf("<< Números primos >>\n");
    printf("Entre com o valor:");
    int p=0, verificador=0, contador=1;
    scanf("%d",&p);
    while(contador<p){
    if((p%contador)==0){
        verificador++;}
    contador++;}
    if (verificador>1){
        printf("O número %d não é primo.",p);}
    else{
        printf("O número %d é primo.",p);}
    return 0;
}

