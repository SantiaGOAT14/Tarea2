#include <stdio.h>

int main() 
{
    
    float dolares, pesos;
    const float tasaCambio = 11.96;

    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);

    pesos = dolares * tasaCambio;

    printf("La cantidad en pesos es: %.2f\n", pesos);

    return 0;
}
