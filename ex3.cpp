#include <stdio.h>

int main() {
    float corrente, resistencia, potencia;

    
    printf("Digite a corrente el�trica (em amperes): ");
    scanf("%f", &corrente);

    printf("Digite o valor da resist�ncia (em ohms): ");
    scanf("%f", &resistencia);

    
    potencia = corrente * corrente * resistencia;

    
    printf("A pot�ncia el�trica dissipada no resistor �: %.2f watts\n", potencia);

    return 0;
}
