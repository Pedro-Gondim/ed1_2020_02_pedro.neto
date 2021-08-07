#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int val[5] = {2,4,5,8,10};
    int* pointer;
    pointer = val;
   
    printf("\nVetor Novo: ");
    for(int i = 0; i<5;i++){
      (*pointer)--;
      printf("%d,",*pointer++);  
    }
    return 0;
}