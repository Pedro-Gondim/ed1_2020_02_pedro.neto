#include <stdio.h>

int main(void) {
  printf("<< Fatorial >>\n");
  int n=1;
  int fatorial=1;
  while(n<=10){
    fatorial=fatorial*n;
    printf("%d! = %d\n",n,fatorial);
    n++;
  }
}