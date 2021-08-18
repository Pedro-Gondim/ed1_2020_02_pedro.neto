#include <stdio.h>

int main(void) {
  char opcao;
  float valor;
  printf("<< Conversor >> \n");
  printf(" Digite uma opção  \n");
  printf("   1 - para converter de km/h para m/s \n");
  printf("   2 - para converter de m/s para hm/h \n");
  printf("   q - para sair \n");
  scanf(" %c",&opcao);
  while(opcao != 'q'){
  switch(opcao){
  case '1':
  printf("Digite a velocidade (km/h):");
  scanf("%f",&valor);
  valor=valor/3.6;
  printf("A velocidade em m/s é %.2f \n\n",valor);
  printf(" << Conversor >> \n");
  printf(" Digite uma opção  \n");
  printf("   1 - para converter de km/h para m/s \n");
  printf("   2 - para converter de m/s para hm/h \n");
  printf("   q - para sair \n");
  scanf(" %c",&opcao);
  break;
  case '2':
  printf("Digite a velocidade (m/s):");
  scanf("%f",&valor);
  valor=valor*3.6;
  printf("A velocidade em km/h é %.0f \n\n",valor);
  printf(" << Conversor >> \n");
  printf(" Digite uma opção  \n");
  printf("   1 - para converter de km/h para m/s \n");
  printf("   2 - para converter de m/s para hm/h \n");
  printf("   q - para sair \n");
  scanf(" %c",&opcao);
  break;
    }
  }
}
