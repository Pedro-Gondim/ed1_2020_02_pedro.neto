#include "TMat2D.h"
#include <stdio.h>
#include <time.h>



TMat2D *mat2D_create(int nrows, int ncolumns){


  if ( (nrows <= 0 ) || (ncolumns <=0) ){
    return NULL;
  }

  TMat2D *mat;
  mat = (TMat2D *)malloc(sizeof(TMat2D));// aloca 12 bytes // FFFFFF
                                // nrows, ncolumns, *data
  if (mat == NULL){
    return NULL;
  }

  mat->data = malloc(sizeof(int)*nrows*ncolumns);
  if (mat->data == NULL){
      free(mat);
      return NULL;
  }

  mat->nrows = nrows;
  mat->ncolumns = ncolumns;


  return mat;

}

int mat2D_free (TMat2D *mat){
  if(mat !=NULL){
    free(mat);
    free(mat->data);
    return 0;
    }

  return -1;
}

int mat2D_set_value(TMat2D *mat, int i, int j, int val){
  if(mat->data !=NULL){      
    mat -> data[(i*mat->ncolumns)+j] = val;
    return 0;
  }

  return -1;
}

int mat2D_get_value(TMat2D *mat, int i, int j, int *val){
  if(mat->data !=NULL){   
    *val = mat -> data[(i*mat->ncolumns)+j] ;
    return 0;
  }

  return -1;
}

int mat2D_multiply_value(TMat2D *mat, int val){
  if(mat == NULL || mat-> data == NULL)
    return -1;
  for(int i=0; i< mat->nrows*mat->ncolumns;i++)
    mat->data[i] = mat->data[i] * val;
  return 0;
}

