/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|
// |4 5 0|
// |0 0 0|



²struct TMat2D
 {
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
 };

*/
// check:<<<erro: e3.2: O ideal é  utilizar uma outra variável para receber o que é retornado pelo realloc, pois se ele não funcionar os dados originais estarão preservados>>>>
// check:<<<erro: e3.3: deve-se lembrar da representação linear da matriz na memória. Isso implica em reposicionar alguns elementos no vetor linear que estavam na matriz original>>>>
int mat2d_increase_size(struct TMat2D* mat,int rows, int columns){
    if(mat == NULL || mat->data == NULL){
        return -1;
    }
    if(rows < mat->nrows || columns < mat->ncolumns){
        //não reduz o tamanho da matriz
        return -1;
    }
     realloc(mat->data,rows*columns*sizeof(double));// check:<<<erro: realloc pode retornar outro ponteiro>>>>
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