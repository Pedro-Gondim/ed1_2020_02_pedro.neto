#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa 
                // com valor 40
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o 
            //conteúdo inicial é lixo
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

    //(a)
    printf("Endereço de A utilizando &a: %u\n",&a);
    printf("Endereço de A utilizando p: %u\n",p);
    printf("Endereço de p: %u\n",p);
    //(b)
    printf("digite novo valor de A: ");
    scanf("%d",p);
    printf("Novo valor: %d\n\n",a);
    //(c)
    int val[5] = {2,4,5,8,10};
    int* pointer;
    pointer = &val[4];
    printf("Digite o novo Numero para o vetor: ");
    scanf("%d",pointer);
    printf("Vetor: ");
    pointer-=4;
    //(e)
    for(int i = 0; i<5;i++)
        printf("%d,",*pointer++);
    
    //(f)
    pointer-=5;
    printf("\nVetor Novo: ");
    for(int i = 0; i<5;i++){
      (*pointer)--;
      printf("%d,",*pointer++);  
    }
        
    printf("\nEndereço de val utilizando &val: %u\n",&val);
    printf("Endereço de val utilizando pointer: %u\n",pointer);
    printf("Endereço de pointer: %u\n",&pointer);
    return 0;
}

/*

Neste exemplo, dizemos que “p aponta para a” ou “p referencia a”. Faça
(a)	Com o código acima e mostre o endereço da variável /a/ de duas formas: 
    uma usando &a e outra usando o ponteiro p. Os endereços devem ser os mesmos.
(b)	Altere o valor da variável /a/ usando o scanf sem usar o operador &.
(c)	Utilizando a função scanf, altere o valor de 10 do vetor /val/ para 20. 
    Não use o operador & no scanf. Utilize uma variável do tipo ponteiro 
    para inteiro para guardar o endereço da posição do vetor.
(d) Mostre o mapa de memória deste código ao final da execução
(e) Utilizando o conceito de desreferenciamento, mostre agora todo o vetor 
    /val/ em um printf, mas com o segundo argumento sendo um ponteiro para 
    os elementos de val. Não use a variável val. Mostre o mapa de memória 
    deste código ao final da execução
(f) Utilize o conceito de desreferenciamento para alterar todo vetor val, 
    subtraindo de cada elemento uma unidade.


//(d)
+----------+----------------+---------------+------+--+
|          |     Blocos     |               |      |  |
| Endereço |       (1 byte) | Nome variável | Tipo |  |
+----------+----------------+---------------+------+--+
| 0 / NULL |   indefinido   |      ----     | ---- |  |
+----------+----------------+---------------+------+--+
|6749672   |      6749680   |  pointer      |  int*|  |
+----------+----------------+---------------+------+--+
|6749673   |      6749680   |               |      |  |
+----------+----------------+---------------+------+--+
|6749674   |      6749680   |               |      |  |
+----------+----------------+---------------+------+--+
|6749675   |      6749680   |               |      |  |
+----------+----------------+---------------+------+--+
|   ...    |                |               |      |  |
+----------+----------------+---------------+------+--+
|6749712   |       6749720  |  p            |  int*|  |
+----------+----------------+---------------+------+--+
|6749713   |       6749720  |               |      |  |
+----------+----------------+---------------+------+--+
|6749714   |       6749720  |               |      |  |
+----------+----------------+---------------+------+--+
|6749715   |       6749720  |               |      |  |
+----------+----------------+---------------+------+--+
|   ...    |                |               |      |  |
+----------+----------------+---------------+------+--+
|6749720   |      7         |  a            |   int|  |
+----------+----------------+---------------+------+--+
|6749721   |      7         |               |      |  |
+----------+----------------+---------------+------+--+
|6749722   |      7         |               |      |  |
+----------+----------------+---------------+------+--+
|6749723   |      7         |               |      |  |
+----------+----------------+---------------+------+--+
|    ...   |                |               |      |  |
+----------+----------------+---------------+------+--+
|6749680   |      2         |  val[0]       |   int|  |
+----------+----------------+---------------+------+--+
|6749681   |      2         |               |      |  |
+----------+----------------+---------------+------+--+
|6749682   |      2         |               |      |  |
+----------+----------------+---------------+------+--+
|6749683   |      2         |               |      |  |
+----------+----------------+---------------+------+--+
|6749684   |      4         |  val[1]       |   int|  |
+----------+----------------+---------------+------+--+
|6749685   |      4         |               |      |  |
+----------+----------------+---------------+------+--+
|6749686   |      4         |               |      |  |
+----------+----------------+---------------+------+--+
|6749687   |      4         |               |      |  |
+----------+----------------+---------------+------+--+
|6749688   |      5         |  val[2]       |   int|  |
+----------+----------------+---------------+------+--+
|6749689   |      5         |               |      |  |
+----------+----------------+---------------+------+--+
|6749690   |      5         |               |      |  |
+----------+----------------+---------------+------+--+
|6749691   |      5         |               |      |  |
+----------+----------------+---------------+------+--+
|6749692   |      8         |   val[3]      |   int|  |
+----------+----------------+---------------+------+--+
|6749693   |      8         |               |      |  |
+----------+----------------+---------------+------+--+
|6749694   |      8         |               |      |  |
+----------+----------------+---------------+------+--+
|6749695   |      8         |               |      |  |
+----------+----------------+---------------+------+--+
|6749696   |      20        |    val[4]     |   int|  |
+----------+----------------+---------------+------+--+
|6749697   |      20        |               |      |  |
+----------+----------------+---------------+------+--+
|6749698   |      20        |               |      |  |
+----------+----------------+---------------+------+--+
|6749699   |      20        |               |      |  |
+----------+----------------+---------------+------+--+

+----------+----------------+---------------+------+--+
| coloque   "lx" para lixo                  |      |  |
+---------------------------+---------------+------+--+
| Programa 32   bits        |               |      |  |
+---------------------------+---------------+------+--+
*/