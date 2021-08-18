#include <stdio.h>

int main(void)
{
    int alunos = 0;
    printf("<< Universidade X >>\n");
    printf("Quantos alunos serão cadastrados:");
    scanf("%d", &alunos);
    int numero_aluno[alunos];
    char classe_aluno[alunos];
    float CRA_aluno[alunos];
    for (int cont = 0; cont < alunos; cont++)
    {
        printf("\nEntre com o número do aluno:");
        scanf("%d", &numero_aluno[cont]);
        printf("Entre com a classe social do aluno %d:", numero_aluno[cont]);
        scanf(" %c", &classe_aluno[cont]);
        printf("Entre com o CRA do aluno %d:", numero_aluno[cont]);
        scanf("%f", &CRA_aluno[cont]);
    }
    printf("\n\n==== Alunos Cadastrados ====");
    for (int cont = 0; cont < alunos; cont++)
        printf("\nNúmero: %d Classe Social: %c CRA: %.2f", numero_aluno[cont],
               classe_aluno[cont], CRA_aluno[cont]);
}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/