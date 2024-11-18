#include <stdio.h>

int main() {
  
    float capitalInicial, tasaInteres, montoFinal;

    printf("Ingrese la cantidad invertida (capital inicial): ");
    scanf("%f", &capitalInicial);

    printf("Ingrese la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasaInteres);

    tasaInteres = tasaInteres / 100; 
    montoFinal = capitalInicial + (capitalInicial * tasaInteres);

    printf("El monto final al terminar el mes es: %.2f\n", montoFinal);

    return 0;
}
