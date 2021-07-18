#include <stdio.h>

int main() {
    char aluno;
    float n1, n2, n3, m;
    int p[3];
    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf("%c",&aluno);
    printf("Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%f",&n3);
    for(int i = 0; i<3;i++){
        printf("Digite o peso da prova %d: ",i+1);
        scanf("%d",&p[i]);
    }
    m = ((n1 *p[0])+(n2*p[1])+(n3*p[2])) / (p[0]+p[1]+p[2]);
    printf("A nota media do aluno %c. eh %.2f",aluno,m);
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/