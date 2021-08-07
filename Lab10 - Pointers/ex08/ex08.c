#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int num;
    double valor;
    void *p;
    p=&num;
    printf("Digite o valor inteiro: ");
    scanf("%d",(int*)p);
    printf("Valor digitado: %d",*(int*)p);
    p=&valor;
    printf("\nDigite o valor double: ");
    scanf("%lf",(double*)p);
    printf("Valor digitado: %.2lf",*(double*)p);
    return 0;
}