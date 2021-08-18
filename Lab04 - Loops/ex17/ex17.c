#include <stdio.h>

int main(void) {
  char correto = 'q';
  char lido='\0';
  int chances=4;
  printf("<<Forca de uma letra só>> \n");
  while(chances>=0 && lido !='q'){
    printf("Qual a letra? ");
    scanf(" %c",&lido);
    if(chances>1 && lido !='q')
        printf("Errado! Você tem mais  %d chances\n",chances);
    if(chances==1 && lido !='q')
        printf("Última chance!!! \n");
    if(chances<1 && lido !='q')
        printf("Acabaram suas chances. A letra correta é 'q'");
    chances--;
    
  }
  if(lido == 'q')
  printf("ACERTOU! ");
  return 0;
}