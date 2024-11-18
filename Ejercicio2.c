#include<stdio.h>
#include<math.h>
int main ()
{
  int radio = 0;
  int area = 0;
  int circunferencia = 0;

  printf ("Ingrese el radio del círculo\n");
  scanf ("%d", &radio);

{
  area = M_PI * radio * radio;
  circunferencia = 2 * M_PI * radio;
}
  printf ("El área del círculo es: %d\n", area);
  printf ("La circunferencia del círculo es: %d\n", circunferencia);
  return 0;
}
  
