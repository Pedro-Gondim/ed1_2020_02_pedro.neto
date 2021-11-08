/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

*/

int remove_intervalo_lista(struct lista* lista, int pos_inicial, int pos_final){
    if(lista == NULL){
        return -1;
    }
    if(pos_final < 1 || pos_inicial < 1 || lista->qtd < 1){
        return -1;
    }
    if(pos_inicial > pos_final){
        //intervalo negativo
        return -1;
    }
    int intervalo = pos_final -pos_inicial +1;
    for(int pos_fin_mN = pos_final, i = 0;i+pos_final< lista->qtd && pos_inicial<=pos_final;pos_fin_mN++){
        //deslocamento da proxima posiçao do final para a posição inicial
        lista->dados[pos_inicial -1] = lista->dados[pos_fin_mN];
        pos_inicial++;

    }
    lista->qtd -= intervalo;
    return 0;
};
