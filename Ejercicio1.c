#include <stdio.h>
#include <math.h>
int main ()
{
  int num1 = 0;
  int num2 = 0;
  int suma = 0;
  int resta = 0;
  int mult = 0;

  printf ("Ingrese dos números:\n");
  printf ("número 1: ");
  scanf ("%d%", &num1);
  printf ("nÚmero 2: ");
  scanf ("%d", &num2);
  
    {
      suma = num1 + num2;
      resta = num1 - num2;
      mult = num1 * num2;
     }
     
  printf("El resultado de la suma es: %d\n", suma);
  printf("El resultado de la resta es: %d\n", resta);
  printf("El resultado de la multiplicacion es: %d\n", mult);
  
  return 0;
}




