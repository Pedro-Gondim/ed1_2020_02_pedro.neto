#include <stdio.h>

int main(void) {
   printf("<<  Contagem Regressiva >>\n");
   int i=10;
   while(i>=0){
      printf("%d.. ",i);
      i--;
   }
   printf("FIM! \n\n");
   return 0;
}