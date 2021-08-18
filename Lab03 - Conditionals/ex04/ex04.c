#include <stdio.h>

int main(void){
    printf("<< Notas da Turma >>\n");
    char  a[2], a_menor, a_maior;
    float n[2], n_menor = 100 , n_maior = 0;
    for(int count = 0;count <3;count++){
        printf("Entre com o nome do aluno #%d: ",count+1);
        setbuf(stdin, NULL);
        scanf("%c",&a[count]);
        printf("Entre com a nota do aluno #%d: ",count+1);
        scanf("%f",&n[count]);
        if(n[count] > n_maior){
            a_maior = a[count];
            n_maior = n[count];
        }
        if(n[count] < n_menor){
            a_menor = a[count];
            n_menor = n[count];
        }
    }
    printf("\n\n%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",a_maior,n_maior,a_menor,n_menor);
    return 0;
}