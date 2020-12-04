/*

3.48 Calculadora da frequência cardíaca. Ao se
exercitar, você pode usar um monitor de batimentos
cardíacos para ver se seus batimentos estão dentro
de uma faixa segura sugerida por seus instrutores
e médicos. De acordo com a American Heart Association
(AHA) (<www.americanheart.org/presenter.
jhtml?identifier=4736>), a fórmula para calcular sua
frequência cardíaca máxima em batimentos por minuto
é 220 menos sua idade em anos. Sua frequência
cardíaca está em uma faixa que é 50 a 85 por cento da
máxima. [Nota: essas fórmulas são estimativas fornecidas
pela AHA. As frequências cardíacas normal e máxima
podem variar com base na saúde, condição física
e sexo do indivíduo. Sempre consulte um médico ou
profissional qualificado antes de iniciar ou modificar
um programa de exercícios.] Crie um programa que
leia a data de nascimento do usuário e o dia atual (consistindo
cada um em dia, mês e ano). Seu programa
deverá calcular e exibir a idade da pessoa (em anos),
sua frequência cardíaca máxima e sua frequência cardíaca
normal.

*/

#include <stdio.h>

int main()
{
    int frequência = 220, nascimento, idade, hoje, freqcardiaca;

    printf("Digite a data atual: (14.08.2020) \n");
    scanf("%d", &hoje);

    printf("Digite a sua data de nascimento: \n");
    scanf("%d", &idade);



    freqcardiaca = frequência - idade;


    return 0;
}
