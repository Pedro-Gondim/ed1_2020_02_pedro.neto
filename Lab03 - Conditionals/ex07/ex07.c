#include <stdio.h>
#include <math.h>

int main(void){
    printf("<<  Tipo de um triangulo  >>\n");
    float a, b, c;
    printf("Insira o comprimento do lado A: ");
    scanf("%f",&a);
    if(a < 0){printf("ERRO: Valor Invalido"); return -1;}
    printf("Insira o comprimento do lado B: ");
    scanf("%f",&b);
    if(b < 0){printf("ERRO: Valor Invalido"); return -1;}
    printf("Insira o comprimento do lado C: ");
    scanf("%f",&c);
    if(c < 0){printf("ERRO: Valor Invalido"); return -1;}
    if((a > b+c)||(b > a+c)||(c > a+b)){
        printf("Nenhum triangulo será formado");
    }
    else{
        if((a*a) == (b*b+c*c)){printf("\nTipo: triângulo retângulo");}
        else{
            if((a*a) > (b*b+c*c)){printf("\nTipo: triângulo obtusângulo");}
            else{
                if((a*a) < (b*b+c*c)){printf("\nTipo: triângulo acutângulo");}
            }
        }
    }
    return 0;
}