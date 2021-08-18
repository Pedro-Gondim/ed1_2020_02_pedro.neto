#include <stdio.h>

int main(void) {
    printf("<<  Contagem Regressiva >>\n");
    for(int i=10; i>=0;i--)
        printf("%d.. ",i);
        printf("FIM! \n\n");
    return 0;
}