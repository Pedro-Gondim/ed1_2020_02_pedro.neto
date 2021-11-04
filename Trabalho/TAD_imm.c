#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_imm.h"
#include "TMat2D.h"

typedef struct point Point;
struct point{
    int x;
    int y;
};


//Funções auxiliares

TMat2D* read_file(char*  file, char* type, TMat2D* matrix){
    FILE* fp = NULL;
    fp = fopen(file,type);
    if(fp == NULL){
        printf("ERRO DE ABERTURA DO ARQUIVO\n");
        system("pause");
        exit (-1);
    }
    
    int row = 23, column = 32*4 ;
    matrix = mat2D_create(row,column);
    while(!feof(fp))
    fread(matrix->data,sizeof(char),23*32*4,fp);
    fclose(fp);
    return matrix;
};

int print_matrix(FILE* OUT,TMat2D* matrix){
    if(matrix == NULL){
        return -1;
    }
    fputs(matrix->data,OUT);
    return 0;
}


//Funções principais


int open(char* fileN,TMat2D* matrix){
    if(strstr(fileN,"txt")!=NULL){
        char type[] = "r";
        matrix = read_file(fileN,type,matrix);
        print_matrix(stdout, matrix);

    }
    else{
        if(strstr(fileN,"imm")!=NULL){
            char type[] = "rb";
            matrix = read_file(fileN,type,matrix);
            print_matrix(stdout, matrix);
        }
        else{
            printf("Extensão de arquivo desconhecida\n");
            system("pause");
            exit (-1);
        }

    }

};

int convert(char* fileIn, char* fileOut,TMat2D* matrix){
    matrix = read_file(fileIn,"r",matrix);
    FILE* OUT;
    OUT = fopen(fileOut,"wb");
    if(OUT == NULL){
        printf("Erro ao criar o arquivo de saída\n");
        system("pause");
        exit (-1);
    }

    print_matrix(OUT,matrix);
    fclose(OUT);
    return 0;

};

int segment(int thr, char* fileIn, char* fileSeg, TMat2D* matrix){
    if(strstr(fileIn,"txt")!=NULL){
        char type[] = "r";
        matrix = read_file(fileIn,type,matrix);
    }
    else{
        if(strstr(fileIn,"imm")!=NULL){
        char type[] = "rb";
        matrix = read_file(fileIn,type,matrix);
        }
        else{
            printf("Arquivo de entrada não valido\n");
            system("pause");
            exit (-1); 
        }

    }

    FILE* OUT;
    if(strstr(fileSeg,"txt")!=NULL){
        OUT = fopen(fileSeg,"w");
    }
    else{
        if(strstr(fileSeg,"imm")!=NULL){
            OUT = fopen(fileSeg,"wb");
        }
        else{
            printf("Arquivo de saída não valido\n");
            system("pause");
            exit (-1); 
        }
    }
    if(OUT == NULL){
        printf("Erro ao criar o arquivo de saída\n");
        system("pause");
        exit (-1);  
    }
    int i =0;
    while(i<23*32*4){
    printf("%c",matrix->data[i]);
    i++;
    }

    return 0;
};

int cc(char* fileSeg, char* fileOut, TMat2D* matrix){
    if(strstr(fileSeg,"txt")!=NULL){
        char type[] = "r";
        matrix = read_file(fileSeg,type,matrix);
    }
    else{
        if(strstr(fileSeg,"imm")!=NULL){
        char type[] = "rb";
        matrix = read_file(fileSeg,type,matrix);
        }
        else{
            printf("Arquivo de entrada não valido\n");
            system("pause");
            exit (-1); 
        }

    }

    FILE* OUT;
    if(strstr(fileOut,"txt")!=NULL){
        OUT = fopen(fileOut,"w");
    }
    else{
        if(strstr(fileOut,"imm")!=NULL){
            OUT = fopen(fileOut,"wb");
        }
        else{
            printf("Arquivo de saída não valido\n");
            system("pause");
            exit (-1); 
        }
    }
    if(OUT == NULL){
        printf("Erro ao criar o arquivo de saída\n");
        system("pause");
        exit (-1);  
    }



    TMat2D* matrix_out;
    matrix_out = read_file(fileOut,"rb",matrix_out);
    int value, valueIn;
    int label = 49;

    for (int i=0; i<matrix->nrows; i++){
        for (int j=0,l=0; j<matrix->ncolumns; j++){
            mat2D_get_value(matrix,i,j,&value);
            if(value == 49)
                value = 48;
            mat2D_set_value(matrix_out,i,j,value);
        }
    }

    for (int i=1; i<matrix->nrows; i++){
        for (int j=1,l=0; j<matrix->ncolumns; j++){
            mat2D_get_value(matrix,i,j,&value);  //verifica se 1 na matrix de entrada
            if(value == 49){
                mat2D_get_value(matrix_out,i,j,&value);     //verifica se é 0 na de saida
                if(value == 48){
                     mat2D_get_value(matrix,i-1,j,&valueIn);
                     mat2D_get_value(matrix_out,i-1,j,&value);  //verifica acima
                    if(valueIn == 49 && value != 48){
                        mat2D_set_value(matrix_out,i,j,value);  //se acima ja estiver prenchido prenche com o conteudo de acima
                    }
                    else{
                        mat2D_get_value(matrix,i+1,j,&valueIn);
                        mat2D_get_value(matrix,i+1,j,&value);   //verifica abaixo
                        if( valueIn == 49 && value != 48){
                            mat2D_set_value(matrix_out,i,j,value); //se abaixo ja estiver prenchido prenche com o conteudo de abaixo
                        }
                        else{
                            mat2D_get_value(matrix,i,j-1,&valueIn);
                            mat2D_get_value(matrix,i,j-1,&value); //verifica esquerda
                            if( valueIn == 49 && value != 48){
                                mat2D_set_value(matrix_out,i,j,value); //se esquerda ja estiver prenchido prenche com o conteudo de esquerda
                            }
                            else{
                                mat2D_get_value(matrix,i,j+1,&valueIn);
                                mat2D_get_value(matrix,i,j+1,&value); //verifica direita
                                if( valueIn == 49 && value != 48){
                                    mat2D_set_value(matrix_out,i,j,value); //se direita ja estiver prenchido prenche com o conteudo de direita
                                }
                                else{
                                    mat2D_set_value(matrix_out,i,j,label);
                                    label++;
                                }  // se nada estiver preenchido, somente o meio é preenchido por label
                            }
                        }
                    }
                }


            }
        }
    }

    print_matrix(OUT,matrix_out);
    fclose(OUT);

    return 0;
};

int lab(char* labIn, char* labOut, TMat2D* matrix){
    printf("parametros passados: %s %s",labIn,labOut);
};
