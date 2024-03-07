
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
