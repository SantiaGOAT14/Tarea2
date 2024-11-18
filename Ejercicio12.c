#include <stdio.h>

int main() 
{
    int N, i;
    unsigned long long producto = 1;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        producto *= i;
    }

    printf("El producto de los primeros %d números naturales es: %llu\n", N, producto);

    return 0;
}
