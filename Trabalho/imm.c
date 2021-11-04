#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_imm.h"
#include "TMat2D.h"



int main(int argc, char* argv[]){
TMat2D* matrix = NULL;
if((strcmp(argv[1],"-open")) == 0){
    open(argv[2],matrix);
    }
else {
    if((strcmp(argv[1],"-convert")) == 0){
    convert(argv[2],argv[3],matrix);
    }
    else{
        if((strcmp(argv[1],"-segment")) == 0){
            int v = atoi(argv[2]);
            segment(v,argv[3],argv[4],matrix);
        }
        else{ 
            if((strcmp(argv[1],"-cc")) == 0){
                cc(argv[2],argv[3],matrix);
            }
            else{
                if((strcmp(argv[1],"-lab")) == 0){
                    lab(argv[2],argv[3],matrix);
                }
                else{
                        printf("Comando não encontrado\n");
                    }
                }
            }
        }
    }
mat2D_free(matrix);
return 0;
} 