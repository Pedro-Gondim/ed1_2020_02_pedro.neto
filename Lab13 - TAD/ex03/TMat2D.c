#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"



// mat = mat2D_create(4,3);

TMat2D *mat2D_create(int nrows, int ncolumns){
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL){
        mat->data = malloc(nrows*ncolumns*sizeof(double));
        if (mat->data != NULL){
            mat->ncolumns = ncolumns;
            mat->nrows = nrows;
        } else {
            free(mat);
            return NULL;
        }
    }
    return mat;
};

int mat2D_free(TMat2D *mat){
    if(mat != NULL){
        free(mat);
        return 1;
    }
    else{
        return -1;
    }
};
int mat2D_ramdom_value(TMat2D* mat1, int min, int max){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    srand(time(0));
    for(int i = 0;i< mat1->nrows*mat1->ncolumns;){
            mat1->data[i] = rand()/((double)RAND_MAX + max);
            mat1->data[i] = mat1->data[i] * (max - min + 1);
            mat1->data[i] = mat1->data[i] + min;
            i++;
        
    }
    return 0;
};

int mat2D_set_value(TMat2D *mat, int i, int j, double val){
    if(mat == NULL || mat->data == NULL){
        return -1;
    }
    if(i > mat->nrows || j > mat->ncolumns){
        return -1;
    }
    i--;j--;
    mat->data[j*mat->nrows+i] = val;
    return 0;
};

int mat2D_get_value(TMat2D *mat, int i, int j, double *val){
    if(mat == NULL || mat->data == NULL){
        return -1;
    }
    if(i > mat->nrows || j > mat->ncolumns){
        return -1;
    }
    i--;j--;
    *val = mat->data[(j*(mat->nrows))+i];
    return 0;
};

int mat2D_add_matrix(TMat2D* mat1, TMat2D* mat2,TMat2D* mat3 ){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(mat2 == NULL || mat2->data == NULL){
        return -1;
    }
    if(mat1->nrows != mat2->nrows || mat1->ncolumns != mat2->ncolumns){
        return -1;
    }
    for(int i = 0;i< mat1->nrows*mat1->ncolumns;i++){
        mat3->data[i] = mat1->data[i] + mat2->data[i];
    }
    return 0;   
};

int mat2D_multiply_matrix(TMat2D* mat1, TMat2D* mat2, TMat2D* mat3){

};

int mat2D_mult_scalar(TMat2D* mat1, int value, TMat2D* mat2){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(mat2 == NULL || mat2->data == NULL){
        return -1;
    }
    if(mat1->nrows != mat2->nrows || mat1->ncolumns != mat2->ncolumns){
        return -1;
    }
    for(int i = 0;i< mat1->nrows*mat1->ncolumns;i++){
        mat2->data[i] = mat1->data[i] * value;
    }
    return 0; 
};

int mat2D_trace(TMat2D* mat1,double* value){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(value == NULL){
        return -1;
    }
    for(int i = 0; i<mat1->nrows;i++){
        for(int j = 0;j<mat1->ncolumns;j++){
            if(i == j){
                *value +=  (mat1->data[j*mat1->nrows+i]);
            }
        }
    }
}; 

int mat2D_rows_vector(TMat2D* mat1, double* vector){
if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(vector == NULL){
        return -1;
    }
    for(int i = 0; i< mat1->nrows;i++){
        vector[i] = 0.0;
        for (int j = 0; j < mat1->ncolumns; j++)
        {
            vector[i] += mat1->data[j*mat1->nrows+i];
        }
        
    }
};

int mat2D_columns_vector(TMat2D* mat1, double* vector){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(vector == NULL){
        return -1;
    }
    for(int i = 0, j =0, k=0; i< mat1->nrows*mat1->ncolumns;i++,j++){
        if(j == mat1->ncolumns){
            k++;
            j = 0;
        } 
        if(j == 0){
            vector[k] = 0.0;
        }
        vector[k] += mat1->data[i];
    }
};

int mat2D_rows_count(TMat2D* mat1, int* rows){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(rows == NULL){
        return -1;
    }
    *rows = mat1->nrows;
    return 0;

};

int mat2D_columns_count(TMat2D* mat1, int* columns){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    if(columns == NULL){
        return -1;
    }
    *columns = mat1->ncolumns;
    return 0;
};

int mat2D_print(TMat2D* mat1){
    if(mat1 == NULL || mat1->data == NULL){
        return -1;
    }
    for(int i = 0; i<mat1->nrows;i++){
        for(int j = 0;j<mat1->ncolumns;j++){
            printf("%.2lf  ",mat1->data[j*mat1->nrows+i]);   
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int mat2d_increase_size(struct TMat2D* mat,int rows, int columns){
    if(mat == NULL || mat->data == NULL){
        return -1;
    }
    if(rows < mat->nrows || columns < mat->ncolumns){
        //não reduz o tamanho da matriz
        return -1;
    }
    realloc(mat->data,rows*columns*sizeof(double));
        if(mat->data == NULL){
            //impossivel alocar mais espaço
            return -1;
        }
    for(int i = (mat->nrows * mat->ncolumns);i<(rows*columns);i++){
        mat->data[i] = 0;
    }
    mat->nrows = rows;
    mat->ncolumns = columns;
    return 0;
}