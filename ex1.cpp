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
 
