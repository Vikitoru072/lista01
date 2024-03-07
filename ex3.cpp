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
