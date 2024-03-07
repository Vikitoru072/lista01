Lista01
1)
#include <stdio.h>

int main() {
    float resistor1, resistor2, resistor3;
    float resistencia_total;

    
    printf("Digite o valor do primeiro resistor: ");
    scanf("%f", &resistor1);

    printf("Digite o valor do segundo resistor: ");
    scanf("%f", &resistor2);

    printf("Digite o valor do terceiro resistor: ");
    scanf("%f", &resistor3);

    
    resistencia_total = resistor1 + resistor2 + resistor3;

    
    printf("A resistencia total do circuito em série é: %.2f ohms\n", resistencia_total);

    return 0;
}
2)
#include <stdio.h>

int main() {
    float tensao, resistencia, corrente;

    
    printf("Digite a tensao aplicada (em volts): ");
    scanf("%f", &tensao);

    printf("Digite o valor da resistencia (em ohms): ");
    scanf("%f", &resistencia);

    
    corrente = tensao / resistencia;

   
    printf("A corrente eletrica que passa pelo resistor é: %.2f amperes\n", corrente);

    return 0;
}
3)
#include <stdio.h>

int main() {
    float corrente, resistencia, potencia;

    
    printf("Digite a corrente elétrica (em amperes): ");
    scanf("%f", &corrente);

    printf("Digite o valor da resistência (em ohms): ");
    scanf("%f", &resistencia);

    
    potencia = corrente * corrente * resistencia;

    
    printf("A potência elétrica dissipada no resistor é: %.2f watts\n", potencia);

    return 0;
}
4)
#include <stdio.h>

int main() {
    float tensao_fonte, resistor1, resistor2, tensao_resistor;

    printf("Digite a tensao da fonte (em volts): ");
    scanf("%f", &tensao_fonte);

    printf("Digite o valor do primeiro resistor (em ohms): ");
    scanf("%f", &resistor1);

    printf("Digite o valor do segundo resistor (em ohms): ");
    scanf("%f", &resistor2);

    
    tensao_resistor = (resistor2 / (resistor1 + resistor2)) * tensao_fonte;

    
    printf("A tensao no segundo resistor é: %.2f volts\n", tensao_resistor);

    return 0;
}
5)
#include <stdio.h>

int main() {
    float resistencia, capacitancia, tempo;

    
    printf("Digite o valor da resistencia (em ohms): ");
    scanf("%f", &resistencia);

    printf("Digite o valor da capacitancia (em farads): ");
    scanf("%f", &capacitancia);

    
    tempo = resistencia * capacitancia;

    
    printf("O tempo necessário para que o capacitor carregue até 63%% de sua capacidade máxima é: %.2f segundos\n", tempo);

    return 0;
} 
