#include <stdio.h>

int main(void) {
    int num;
    printf("<< Contagem progressiva até 0 >> \n");
    printf("Qual é o número inicial? ");
    scanf("%d",&num);
    int i=num;
    for(int i=num; i<=0;i++)
        printf("%d.. ",i);
    printf("FIM! \n\n");
    return 0;
}