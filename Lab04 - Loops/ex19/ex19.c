#include <stdio.h>

int main(void) {
  float jose= 50000.00;
  float carlos= 25000.00;
  int anos=0;
  int mes=0;
  while(carlos<jose){
    for(mes=1;mes<=12;mes++){
      jose=jose+800.00;
      carlos=carlos+3000.00;
      if(mes==12){
        anos++;}
    }
  }
  mes = mes - (anos * 12);
  printf("%d ano(s) e %d mes(es)",anos, mes);
}