/* ex03
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/

#include <stdio.h>
#include <stdlib.h>

// check:<<<erro: faltou passar o tamanho final que ficará novo vetor>>>>
int funcao(int* vet1, int n1, int* vet2, int n2, int** vetR){
    int* vet_conc;
    vet_conc = malloc(sizeof(int)*(n1+n2));
    if(vet_conc == NULL)
        return -1;
    for(int i = 0;i<n1;i++){
        vet_conc[i] = vet1[i];
        
    }
    for(int i = 0;i<n2;i++){
        vet_conc[n1+i] = vet2[i];
    }
    *vetR = vet_conc;
    return 0;
};


int main(void){
    int vetor1[3] = {1,5,2};
    int vetor2[2] = {10,30};
    int** vetor_R;// check:<<<erro: deveria ser só um ponteiro aqui>>>>
    funcao(vetor1,3,vetor2,2,vetor_R);
    printf("Vetor concatenado:\n[");
    for(int i = 0;i<5;i++)
    printf("%d, ",vetor_R[i]);
    printf("]");
    return 0;
};
