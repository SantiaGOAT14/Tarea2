#include <stdio.h>

int main() 
{
    float sueldo, sueldoAumentado;

    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) {
        sueldoAumentado = sueldo * 1.15;
    } else {
        sueldoAumentado = sueldo * 1.12;
    }

    printf("El sueldo con aumento es: %.2f\n", sueldoAumentado);

    return 0;
}
