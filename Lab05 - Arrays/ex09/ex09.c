#include <stdio.h>

int main(void)
{
    printf("<< Média de n alunos. Máximo 100 alunos >>\n");
    printf("Entre com o número de alunos:");
    int num_alunos = 0;
    float media = 0.0, soma = 0.0;
    scanf("%d", &num_alunos);
    if (num_alunos > 100)
    {
        printf("Erro! O número máximo de alunos permitido é 100.\n");
    }
    int aluno[num_alunos];
    if (num_alunos < 101)
    {
        for (int cont = 0; cont < num_alunos; cont++)
        {
            printf("Digite a nota do aluno %d:", cont + 1);
            scanf("%d", &aluno[cont]);
            soma = soma + aluno[cont];
        }
        media = soma / num_alunos;
        printf("\nRelatório de Notas");
        for (int cont = 0; cont < num_alunos; cont++)
            printf("\nA nota do aluno %d é:%d", cont, aluno[cont]);
        printf("\nA média da turma é:: %.1f", media);
    }
}

/*
Faça um programa que calcula a média das notas dos alunos de uma turma. Note 
que uma turma pode ter no máximo 100 alunos (mostrar uma mensagem de erro 
caso o número escolhido seja maior que 100). Peça para o usuário entrar com 
o número de alunos e ao final mostre a nota de todos os alunos.

Exemplo de Saída
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 4
Digite a nota do aluno 1: 6
Digite a nota do aluno 2: 7
Digite a nota do aluno 3: 5
Digite a nota do aluno 4: 4

Relatorio de Notas
Nota do aluno 0: 6
Nota do aluno 1: 7
Nota do aluno 2: 5
Nota do aluno 3: 4
Media da turma:  5.5

------------------------------------
Exemplo de Saída 2
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 400
Erro! O numero maximo de alunos permitido eh 100.
*/
