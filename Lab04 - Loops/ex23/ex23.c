#include <stdio.h>

int main(void) {
  int n=1;
  int termos;
  double fatorial=1.0;
  double e=1.0;
  printf("<< Número neperiano >> \n");
  printf("Entre com o número de termos: ");
  scanf("%d",&termos);
  
  while(n<=termos){
    fatorial=fatorial*n;
    e=e+(1/fatorial);
    n++;
  }
  printf("e ~ %.14lf",e);
}