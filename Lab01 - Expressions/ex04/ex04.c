#include <stdio.h>

int main() {
    int N = 0;
    float nota[4];
    nota[4] = 0;
    printf("<< Media Aritmetica >>\n");
    while(N<4){
        printf("Digite a %da nota: ",N+1);
        scanf("%f",&nota[N]);
        nota[4] = nota[4] + nota[N];
        N++;
    }
    nota[4] =  nota[4] / 4.0;
    N = 0;
    printf("\n===Notas===\n");
    while(N<4){
        printf("Nota %d: %g; ",N+1,nota[N]);
        N++;
    }
    printf("\nMedia: %g",nota[4]);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/