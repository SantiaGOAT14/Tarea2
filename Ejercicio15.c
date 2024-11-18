#include <stdio.h>
int main() 
{
    int n;  
    printf("¿Cuál es el tamaño del arreglo? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El tamaño del arreglo debe ser mayor que 0.\n");
        return 1;
    }

    int arr[n]; 
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
  
    int positivos = 0, negativos = 0, nulos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positivos++;
        } else if (arr[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
