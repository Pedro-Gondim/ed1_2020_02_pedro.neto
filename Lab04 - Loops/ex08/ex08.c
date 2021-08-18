#include <stdio.h>

int main(void) {
    int num;
    printf("<< Contagem progressiva até 0 >> \n");
    printf("Qual é o número inicial? ");
    scanf("%d",&num);
    int i=num;
    do{
        printf("%d.. ",i);
        i++;
    }while(i<=0);
    printf("FIM! \n\n");
    return 0;
}
// Não é melhor solução para o problema já que este laço é executado pelo menos 1 vez antes de ser verificada a 
// condição de saída