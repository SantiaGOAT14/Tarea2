#include <stdio.h>
int main() 
{
    int num1, num2;
  
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    } else {
        printf("%d no es divisor de %d\n", num2, num1);
    }

    return 0;
}
