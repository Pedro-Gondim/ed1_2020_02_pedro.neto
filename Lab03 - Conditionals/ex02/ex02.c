#include <stdio.h>

int main(void){
    printf("<< Conversor de Temperatura >>\n");
    float inicial_temp, final_temp;
    char c;
    printf("Digite a temperatura: ");
    scanf("%f",&inicial_temp);
    printf("Digite a unidade: ");
    setbuf(stdin,NULL);
    scanf("%c",&c);
    if( (c == 'c')||(c == 'C')){
        final_temp = (inicial_temp * 1.8) + 32;
        printf("%g graus Celsius equivale a %g graus Fahrenheit",inicial_temp, final_temp);
    }
    else{
        if((c == 'f')||(c == 'F')){
            final_temp = (inicial_temp -32) / 1.8;
            printf("%g graus Fahrenheit equivale a %g graus Celsius",inicial_temp, final_temp);
        }
        else{
            printf("Erro: Unidade desconhecida\n");
        }
    }
    return 0;
}