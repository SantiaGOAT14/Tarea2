#include <stdio.h>

int main() {
    int suma = 0, i;

    for (i = 10; i <= 50; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
