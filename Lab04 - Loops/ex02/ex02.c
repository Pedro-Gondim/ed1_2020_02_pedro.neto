#include <stdio.h>

int main(void) {
   printf("<<  Contagem Regressiva >>\n");
   int i=10;
   do{
      printf("%d.. ",i);
      i--;
   }while(i>=0);
   printf("FIM! \n\n");
   return 0;
}