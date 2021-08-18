#include <stdio.h>

int main(void) {
  int n;
  int valor=1;
  printf("<<  Triângulo de Floyd  >>\n");
  printf("Digite o número de linhas do triângulo: ");
  scanf("%d",&n);
  for(int linhas,colunas=0;colunas<=n;colunas++){
    for(linhas=0;linhas<colunas;linhas++){
      printf("%d ",valor);
      valor++;
    
    }
    if(linhas==colunas){
      printf("\n");
    }
  }
}