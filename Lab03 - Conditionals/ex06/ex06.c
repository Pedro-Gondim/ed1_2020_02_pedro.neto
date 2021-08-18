#include <stdio.h>
#include <math.h>

int main(void){
    printf("<< Quadrado Perfeito >>\n");
    int num;
    float raiz;
    printf("Digite o número inteiro: ");
    scanf("%d",&num);
    raiz = sqrt(num);
    if(((float)raiz - (int)raiz) != 0.0){
        printf("%d não é um quadrado perfeito",num);
    }
    else{
        printf("%d é um quadrado perfeito e sua raiz quadrada é %g",num, raiz);
    }
    return 0;
}