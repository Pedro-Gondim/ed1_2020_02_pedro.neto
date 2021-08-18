#include <stdio.h>

int main(void) {
  char c;
  int num=32;
  while(num<127){
    for(int cont=0;cont<7&&num<127;cont++){
      printf("%3.0d %c  ",num, num);
      if(cont==6)
      printf("\n");
      num++;
    }
  }
}