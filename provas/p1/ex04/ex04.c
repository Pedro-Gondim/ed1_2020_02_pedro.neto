#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto
{
    double x;
    double y;
};


struct Circulo
{
    struct Ponto ponto;
    double raio;    
};


int main(){

   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
   
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0

   struct Circulo val1;
   val1.ponto.x = 3;
   val1.ponto.y = 5;
   val1.raio = 2;

   float area = 3.14 * pow(val1.raio,2);
   double distancia  = sqrt(val1.ponto.x*val1.ponto.x + val1.ponto.y*val1.ponto.y);
   

   printf("Circulo: Centro (%g,%g); Raio %g; Área: %g; Distancia: %g",val1.ponto.x,val1.ponto.y,val1.raio,area,distancia);


    return 0;
}