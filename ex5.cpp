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
