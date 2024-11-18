#include <stdio.h>

int main() {
    float montoCompra, montoFinal;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &montoCompra);

    if (montoCompra > 2500) {
        montoFinal = montoCompra * 0.92; 
    } else {
        montoFinal = montoCompra;
    }

    printf("El monto final a pagar es: %.2f\n", montoFinal);

    return 0;
}
