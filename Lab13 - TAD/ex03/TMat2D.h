
typedef struct TMat2D TMat2D; 

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);
int mat2D_ramdom_value(TMat2D* mat1, int min, int max);
int mat2D_set_value(TMat2D *mat, int i, int j, double val);
int mat2D_get_value(TMat2D *mat, int i, int j, double *val);
int mat2D_add_matrix(TMat2D* mat1, TMat2D* mat2,TMat2D* mat3 );         // mat3 já deve estar alocada
int mat2D_multiply_matrix(TMat2D* mat1, TMat2D* mat2, TMat2D* mat3);    // mat3 já deve estar alocada
int mat2D_mult_scalar(TMat2D* mat1, int value, TMat2D* mat2);           // mat2 já deve estar alocada
int mat2D_trace(TMat2D* mat1,double* value);
int mat2D_rows_vector(TMat2D* mat1, double* vector);    // o vetor já deve estar criado
int mat2D_columns_vector(TMat2D* mat1, double* vector); // 0 vetor já deve estar criado
int mat2D_rows_count(TMat2D* mat1, int* rows);
int mat2D_columns_count(TMat2D* mat1, int* columns);
int mat2D_print(TMat2D* mat1);