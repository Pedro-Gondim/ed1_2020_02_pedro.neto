#include <stdio.h>

int main(void) {
    int num;
    printf("<< Contagem regressiva >> \n");
    printf("Qual é o número inicial? ");
    scanf("%d",&num);
    int i=num;
    while(i>=0){
        printf("%d.. ",i);
        i--;
    }
    printf("FIM! \n\n");
    return 0;
}