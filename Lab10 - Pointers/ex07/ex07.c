#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    char nome[] = "José Augusto";
    char *p;
    p = nome;
    while(*p != '\0'){
        printf("%c",*p);
        p++;
    }
    return 0;
}