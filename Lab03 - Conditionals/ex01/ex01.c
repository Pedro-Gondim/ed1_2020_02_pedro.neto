#include <stdio.h>

int main(void){
    printf("<< Cálculo da Média >>\n");
    char c;
    float n1, n2, n3, nf;
    printf("Digite a inicial do nome do aluno: ");
    setbuf(stdin, NULL);
    scanf("%c",&c);
    printf("Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%f",&n3);
    nf = (n1*1 + n2*1 + n3*2)/4;
    printf("A nota média do aluno %c.é %g=> ",c,nf);
    if(nf >= 60.00){printf("APROVADO!");}
    else{printf("REPROVADO!");}
    return 0;
}