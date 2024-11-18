#include <stdio.h>
int main() 
{
    int contar_ocurrencias(int arreglo[], int tamaño, int numero) {
    int contador = 0;
    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }
    return contador;
}

    int n, numero, resultado;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &numero);

    resultado = contar_ocurrencias(arreglo, n, numero);

    printf("El número %d aparece %d veces en el arreglo.\n", numero, resultado);

    return 0;
}
