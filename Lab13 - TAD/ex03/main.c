#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"

int main(void){
    TMat2D* mat;
    mat = mat2D_create(3,3);
    mat2D_ramdom_value(mat,1,99);
    mat2D_set_value(mat,3,3,5.0);
    mat2D_print(mat); 
    mat2d_increase_size(mat,4,4);
    mat2D_print(mat); 

    TMat2D* mat2 = mat2D_create(3,3);
    mat2D_ramdom_value(mat2,2,50);
    mat2D_set_value(mat2,3,3,10.0);
    mat2D_print(mat2); 

    TMat2D* mat3 = mat2D_create(3,3);
    mat2D_add_matrix(mat,mat2,mat3);
    mat2D_print(mat3); 
    
    mat2D_mult_scalar(mat,2,mat3);
    mat2D_print(mat3);
    
    
    double trace;
    mat2D_trace(mat3,&trace);
    printf("%.2lf",trace);

    int rows;
    mat2D_rows_count(mat,&rows);
    printf("\n\n%d\n",rows);
    double* vector= malloc(sizeof(double)*rows);
    mat2D_rows_vector(mat,vector);
    for (int i = 0; i < rows; i++)
    {
        printf("%.2lf  ",vector[i]);
    }

    int columns;
    mat2D_rows_count(mat,&columns);
    printf("\n\n%d\n",columns);
    double* vector2= malloc(sizeof(double)*columns);
    mat2D_columns_vector(mat,vector2);
    for (int i = 0; i < columns; i++)
    {
        printf("%.2lf  ",vector2[i]);
    }
    
    mat2D_free(mat);
    mat2D_free(mat2);
    mat2D_free(mat3);
    return 0;
};