#include <stdio.h>
#include <math.h>

int main(void){
    int bit = 2;
    for(int i =1; i<8.0;i++){
        printf("Com %d bits é possível endereçar %G posições de memória\n",bit,pow(2.0,bit));
        bit = 2 * bit;
        
    }
    return 0;
}