#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    double vetor[10]= {0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    for(int i=0;i<10;i++){
        printf("%.4lf, ",*(vetor+i));
    }
    return 0;
}