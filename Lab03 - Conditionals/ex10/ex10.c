#include <stdio.h>


int main(void){
    printf("== Operadores Booleanos ==\n");
    unsigned int a, b;
    float n1, n2;
    unsigned int and, or, xor, not;
    printf("Digite 0 para falso e não 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A):");
    scanf("%f",&n1);
    printf("Entre com o primeiro valor (B):");
    scanf("%f",&n2);
    if(n1 == 0){a = 0;}
    else{a = 1;};
    if(n2 == 0){b = 0;}
    else{b = 1;}
    and =  a && b; 
    or = a || b;
    xor = (a != b);
    not =  !a;
    printf("A and B: ");
    if(and == 1){printf("VERDADEIRO\n");} else{printf("FALSO\n");}
    printf("A or B: ");
    if(or == 1){printf("VERDADEIRO\n");} else{printf("FALSO\n");}
    printf("A xor B: ");
    if(xor == 1){printf("VERDADEIRO\n");} else{printf("FALSO\n");}
    printf("not A: ");
    if(not == 1){printf("VERDADEIRO\n");} else{printf("FALSO\n");}
    return 0;
}