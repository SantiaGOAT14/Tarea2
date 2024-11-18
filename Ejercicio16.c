#include <stdio.h>
int main() {
    int numeros_pares[100]; 

    for (int i = 0; i < 100; i++) {
        numeros_pares[i] = i * 2; 
    }

    printf("Los primeros 100 números pares son:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", numeros_pares[i]);
    }
    printf("\n");

    return 0;
}
