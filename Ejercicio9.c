#include <stdio.h>
int main() {
    int NumEnt, i;

    printf("Ingrese un número entero: ");
    scanf("%d", &NumEnt);

    printf("Tabla de multiplicar del %d:\n", NumEnt);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", NumEnt, i, NumEnt * i);
    }

    return 0;
}
