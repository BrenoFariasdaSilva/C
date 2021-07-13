/*

7.2 Indique se as seguintes sentenças são falsas ou verdadeiras.
Se a resposta for falsa, explique.
a) O operador de endereço (&) pode ser aplicado somente
a constantes, a expressões e a variáveis declaradas
com a classe de armazenamento register.

RESPOSTA: 
Falso. O operador de endereço pode ser aplicado somente
a variáveis. O operador de endereço não pode ser
aplicado a variáveis declaradas com classe de armazenamento
register.

b) Um ponteiro que é declarado como void pode ser
desreferenciado.

RESPOSTA:
Falso. Um ponteiro para void não pode ser desreferenciado,
pois não existe um modo de saber exatamente quantos bytes de 
memória desreferenciar.

c) Ponteiros de diferentes tipos podem ser atribuídos
uns aos outros sem uma operação de coerção (cast).

RESPOSTA:
Falso. Os ponteiros do tipo void podem receber ponteiros
de outros tipos, e ponteiros do tipo void podem
ser atribuídos a ponteiros de outros tipos.
 

*/

#include <stdio.h>

int main()
{
    
    return 0;
}
