#include <stdio.h>

int main(void) {
    int num;
    int soma=0;
    printf("<< Soma de n valores naturais >> \n");
    printf("Quantos números deseja somar? ");
    scanf("%d",&num);
    int i=0;
    soma=0;
    do{
        soma=soma+i;
        i++;
    }while(i<=num);
    printf("A soma dos %d primeiros números naturais é: %d\n",num,soma);
    return 0;
}