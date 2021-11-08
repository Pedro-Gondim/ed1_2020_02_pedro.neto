/*
1) Considerando o TAD ListaSequencial¹, implemente uma nova 
função chamada troca_pos_lista, que troca dois elementos da
lista de posição. Na chamada da função o usuário deverá informar
os dois elementos que devem ser trocados. Por exemplo, na chamada
abaixo, é feita a troca dos elementos na posição 4 e 10, isto é,
o elemento da posição 4 vai para a posição 10, e o da  posição 10
vai para a posição 4. Nas situações inválidas a função deverá
retornar como código de erro o número -1. Sucesso retornar 0. 
Mantenha o padrão pré-definido do TAD, que diz que a
posição 1 corresponde ao primeiro elemento da lista.

Exemplo da chamada da função
troca_pos_lista( lista, 4, 10)

struct lista{
    int qtd;
    struct aluno dados[MAX];
 };


*/

int troca_pos_lista(struct lista* lista, int posicao1, int posicao2){
   if(lista == NULL){
      return -1;
   }
   if(posicao1 > (lista->qtd) || posicao2 > (lista->qtd)){ 
      // se uma das posições não esteja preenchida, não há a troca
      return -1;
   }
   if(posicao1 < 1 || posicao2 <1){
      // considerando q 1 é 1ª posição, valores menores são invalidos
      return -1;
   }
   struct aluno temp; // troca temporaria;
   temp = lista->dados[posicao1-1];
   lista->dados[posicao1-1] = lista->dados[posicao2-1];
   lista->dados[posicao2-1] = temp;
   return 0;

};