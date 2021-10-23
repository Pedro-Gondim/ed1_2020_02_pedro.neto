#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_imm.h"

typedef struct point Point;
struct point{
    int x;
    int y;
};

//Funções auxiliares
int read_file(char*  file, char* type, TMat2D* output){
    FILE* fp = NULL;
    fp = fopen(file,type);
    if(fp == NULL){
        printf("ERRO DE ABERTURA DO ARQUIVO\n");
        system("pause");
        exit (INVALID_NULL_POINTER);
    }
    char c;
    fseek(fp,3,SEEK_SET);

    int row, column;
    fscanf(fp,"%d",&row);
    fscanf(fp,"%d",&column);
    output = mat2D_create(row,column*4);
    
    fseek(fp,15,SEEK_SET);
 
    for (int i=0; i<output->nrows; i++){
        for (int j=0; j<output->ncolumns; j++){
            c= fgetc(fp);
            if(c != EOF)
            mat2D_set_value(output,i,j,c);
        }
    } 
    fclose(fp);
    return SUCCESS;
};

int print_matrix(FILE* OUT,int size,TMat2D* matrix,char function){
    if(matrix == NULL){
        return INVALID_NULL_POINTER;
    }
    char c;
    int value;
    fprintf(OUT,"P2\n");
    fprintf(OUT,"%d %d\n",matrix->nrows,matrix->ncolumns/4);
    fprintf(OUT,"%d",size);
    if(function == 's')
    fprintf(OUT,"\n");
    for (int i=0; i<matrix->nrows; i++){
        for (int j=0; j<matrix->ncolumns; j++){
            mat2D_get_value(matrix,i,j,&value);
            if(value != 00)
            fprintf(OUT,"%c",value);
        }


    }
    return SUCCESS;
};

//Funções principais
int open_file_txt(char* input){
    TMat2D* matrix;
    char c= 'r';
    read_file(input,&c,matrix);
    mat2D_print(matrix);
};

int convert(char* address, char* output){

};

int open_file_imm(char* input){
    TMat2D* matrix;
    char c= 'rb';
    read_file(input,&c,matrix);
    mat2D_print(matrix);
};

int segment(int thr, char* input, char* output){

};

int cc (char* input, char* output){

};

int lab(char* input, char* output){

};
