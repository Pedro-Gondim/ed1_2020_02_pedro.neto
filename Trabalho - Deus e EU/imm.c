#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_imm.h"


int main(int argc, char* argv[]){
if((strcmp(argv[1],"-open")) == 0){
    if((strstr(argv[2],".txt")!=NULL)){
        open_file_txt(argv[2]);
    }
    else{
        if((strstr(argv[2],".imm")!=NULL)){
        open_file_imm(argv[2]);
        }
        
        else{
            printf("Extensão de arquivo desconhecida\n");
            system("pause");
            exit (INVALID_NULL_POINTER);
        }
    }
}
else {
    if((strcmp(argv[1],"-convert")) == 0){
    convert(argv[2],argv[3]);
    }
    else{
        if((strcmp(argv[1],"-segment")) == 0){
            int v = atoi(argv[2]);
            segment(v,argv[3],argv[4]);
        }
        else{ 
            if((strcmp(argv[1],"-cc")) == 0){
                cc(argv[2],argv[3]);
            }
            else{
                if((strcmp(argv[1],"-lab")) == 0){
                    lab(argv[2],argv[3]);
                }
                else{
                    printf("Comando não encontrado\n");
                }
            }
        }
    }
}
return 0;
} 