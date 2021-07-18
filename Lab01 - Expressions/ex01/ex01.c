#include <stdio.h>

int main(){
    float num;
    printf("<< Calculo do Quadrado de n >>\n");
    printf("Digite um número: ");
    scanf("%f",&num);
    printf("o valor de %g ao quadrado é %g",num,num*num);
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/