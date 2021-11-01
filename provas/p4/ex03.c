/*
ex03) Mostre como uma pilha pode ser usada para resolver a expressão 
matemática abaixo. Não confundir números negativos com subtrações.

Cada número e operador é lido em um passo. 
Para cada passo, mostre o estado da pilha 

Exemplo de como mostrar a pilha
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 

7 -6 3 * + 6 -


*/

/*
7 <topo                                     push(7);
7   -6 <topo                                Push(-6);
7   -6    3 <topo                           push(3);
7   -18 <topo                               push(pop()*pop());
-11 <topo                                   push(pop()+pop());
-11  6 <topo                                push(6);// check:<<<erro: 6 - -11 = 17>>>>
-5 <topo                                    push(pop()-pop());
saida: -5                                   printf("%d",pop());

*/
