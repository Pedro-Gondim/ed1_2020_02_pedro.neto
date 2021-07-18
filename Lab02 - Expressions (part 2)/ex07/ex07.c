#include <stdio.h>

int main() {
    int A, B;
    int and = 0, or = 0, xor = 0, notA = 0;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\nEntre com o primeiro valor (A): ");
    scanf("%d",&A);
    if(A != 0){ A = 1;}
    printf("Entre com o segundo valor (B): ");
    scanf("%d",&B);
    if(B != 0){ B = 1;}
    if((A == B) && (A == 1) ){ and = 1;}
    if((A == 1) || (B == 1) ){ or = 1;}
    if(( A != B)){ xor = 1;}
    if(A == 0){notA = 1;}
    printf("A and B: %d\n",and);
    printf("A or B: %d\n",or);
    printf("A xor B: %d\n",xor);
    printf("not A: %d\n",notA);
    
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/