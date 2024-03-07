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
