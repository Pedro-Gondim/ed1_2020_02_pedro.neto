#include <stdio.h>

int main(void) {
  printf("<< Fatorial >>\n");
  int n=1;
  double fatorial=1.0;
  while(n<=15){
    fatorial=fatorial*n;
    if(n>10)
    printf("%d! = %.0lf\n",n,fatorial);
    n++;
  }/*O tipo int só suporta valores ate 2.147.483.647, já alterando as variaveis
  para double se resolve esse impedimento*/
  
}