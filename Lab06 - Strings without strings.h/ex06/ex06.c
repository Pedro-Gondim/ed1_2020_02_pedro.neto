#include <stdio.h>

int main(void) {
  char c;
  char nome[20], sobrenome[20];
  int posN=0, posS=0;
  printf("<<  Nomes  >>\n");
  printf("Digite o primeiro nome e último nome:");
  c=getchar();
  while(c != 32){
  nome[posN]=c;
  posN++;
  c=getchar();
  }
  
  while(c!='\n'){
  sobrenome[posS]=c;
  posS++;
  c=getchar();
  }
  printf("Nome: ");
  for(int cont=0;cont<posN;cont++)
  printf("%c",nome[cont]);
  printf("\nSobrenome:");
  for(int cont=0;cont<posS;cont++)
  printf("%c",sobrenome[cont]);
}