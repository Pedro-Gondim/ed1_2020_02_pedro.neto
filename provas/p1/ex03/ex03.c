#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/

int lucro(float compra, float venda, float *porcento){
    if (compra <= 0)
        return -1;
    *porcento = ((venda - compra) *  100)/compra;
    if(*porcento <= 0){
        *porcento = *porcento * -1;
        return 1;
    }
    if(*porcento > 0 && *porcento <= 20){
        return 2;
    }
    if(*porcento > 20 && *porcento <= 40){
        return 3;
    }
    if(*porcento > 40){
        return 4;
    }

    return 0;

}

int main(){
    float compra;
    float venda;
    int return_lucro;
    float* porcento = NULL;
    float lucro_p;
    porcento = &lucro_p;

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   printf("Digite o preco de compra:");
   scanf("%f",&compra);
   printf("Digite o preco de venda:");
   scanf("%f",&venda);
   return_lucro = lucro(compra,venda, porcento);

   switch (return_lucro)
   {
    case -1:
       printf("Valor invalido.");
       return 0;
       break;
    case 1:
       printf("Preço de compra: %g; Preco de venda:%g; Prejuízo de %g%%",compra,venda,*porcento);
       return 0;
       break;
    case 2:
       printf("Preço de compra: %g; Preco de venda:%g; Lucro pequeno de %g%%",compra,venda,*porcento);
       return 0;
       break;
    case 3:
       printf("Preço de compra: %g; Preco de venda:%g; Lucro bom de %g%%",compra,venda,*porcento);
       return 0;
       break;
    case 4:
       printf("Preço de compra: %g; Preco de venda:%g; Lucro alto de %g%%",compra,venda,*porcento);
       return 0;
       break;
    
   
   default:
        return -1;
       break;
   }
   
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}