#include <stdio.h>

int main() 
{
    float distanciaIda, distanciaTotal, precioTotal;
    int diasEstancia;

    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &distanciaIda);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &diasEstancia);

    distanciaTotal = distanciaIda * 2;
    precioTotal = distanciaTotal * 0.23; 

    if (distanciaTotal > 800 && diasEstancia > 7) {
        precioTotal *= 0.70; 
    }

    printf("El precio total del ticket es: %.2f\n", precioTotal);

    return 0;
}
