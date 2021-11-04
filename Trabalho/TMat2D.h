#ifndef _TMat2Dh_
#define _TMat2Dh_

#include <stdlib.h>

typedef struct TMat2D TMat2D;

struct TMat2D
{
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  char *data; // ponteiro para os dados da matriz
};

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);
int mat2D_set_value(TMat2D *mat, int i, int j, int val);
int mat2D_get_value(TMat2D *mat, int i, int j, int *val);
int mat2D_add_matrix(TMat2D *matA, TMat2D *matB);
int mat2D_multiply_value(TMat2D *mat, int val);
#endif