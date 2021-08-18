#include <stdio.h>

int main(void) {
  char c;
  char nome[2][50];
  int i, pos,soma1=0, soma2=0, verificador=0; // pos - guarda a posição atual no vetor
  
    printf("<< Compara nomes>>\n");
    for(int cont=0;cont<2;cont++){
    pos = 0;
    printf("Digite o nome %d: ",cont+1);
    c = getchar(); // busca uma letra no buffer
    while (c != '\n') {  // fica no loop enquanto nao encontrar um ENTER
        nome[cont][pos] = c;
        pos++;
        c = getchar(); // consome o próximo caractere do buffer
        
    }
      
  }
  int ascii[2][pos];
    for(int cont=0;cont<pos;cont++){
      ascii[0][cont]=nome[0][cont];
      soma1=soma1+ascii[0][cont];
      ascii[1][cont]=nome[1][cont];
      soma2=soma2+ascii[1][cont];
      if(soma1!=soma2)
      verificador++;
    }
  if(verificador==0)
  printf("Os nomes digitados são iguais");
  else
  printf("Os nomes digitados são diferentes");
}