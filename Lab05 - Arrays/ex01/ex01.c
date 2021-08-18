#include <stdio.h>

int main(void) {
int vetor = 5;
int num[vetor];
vetor = 1;
  printf("<< Listando um vetor >>\n");
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
  vetor++;
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
  vetor++;
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
  vetor++;
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
  vetor++;
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
  vetor++;
  printf("Entre com o número %d:",vetor);
  scanf("%d",&num[vetor-1]);
printf("\n\nOs valores lidos são: %d %d %d %d %d %d",num[0],num[1],num[2],num[3],num[4],num[5]);
  
}

/*

*/