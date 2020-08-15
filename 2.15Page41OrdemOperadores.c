// Ordem dos Operadores.
/*

2.15 Indique a ordem de avaliação dos operadores em cada
uma das instruções em C a seguir, e mostre o valor de x
após a execução de cada instrução.
a) x = 7 + 3 * 6 / 2 - 1;
b) x = 2 % 2 + 2 * 2 - 2 / 2;
c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );

RESPOSTA:

a) (3 * 6)18 -> (18/2)9 -> (9 + 7)16 -> (16 - 1)  <-> 15.
 
b) (2 % 2)0 -> (2 * 2)4 -> (2 / 2)1 -> (0 + 4)4 -> (4 - 1) <-> 3.

c) (9 * 3)27 -> (27 / 3)9 -> (9 + 3)12 -> (3 * 9)27 -> (27 * 12) <-> 324.  

*/