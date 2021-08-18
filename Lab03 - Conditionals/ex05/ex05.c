#include <stdio.h>
#include <math.h>

int main(void){
    printf("<<  IMC  >>\n");
    float massa, altura, imc;
    printf("Digite a massa (em KG): ");
    scanf("%f",&massa);
    printf("Digite a altura (em m): ");
    scanf("%f",&altura);
    imc = massa / pow(altura,2.0);
    if(imc < 18.5){printf("IMC: %.1f ==> Magreza",imc);}
    if(imc >= 18.5 && imc <=24.9){printf("IMC: %.1f ==> Saudável",imc);}
    if(imc >= 25.0 && imc <=29.9){printf("IMC: %.1f ==> Sobrepeso",imc);}
    if(imc >= 30.0 && imc <=34.9){printf("IMC: %.1f ==> Obesidade Grau I",imc);}
    if(imc >= 35.0 && imc <=39.9){printf("IMC: %.1f ==> Obesidade Grau II(severa)",imc);}
    if(imc >= 40.0){printf("IMC: %.1f ==> Obesidade Grau III(morbida)",imc);}
    return 0;
}