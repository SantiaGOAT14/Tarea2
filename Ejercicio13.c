#include<stdio.h>
#include <math.h>
int main ()
{
  int n, i, suma = 0;
  int arr [n];

  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &n);

  printf("Ingrese los elementos del arreglo: \n");
  for (i = 0; i < n; i++)
    {
      printf("Elemento %d: ", i + 1);
      scanf("%d", &arr[i]);
    }
  for (i = 0; i < n; i++)
    {
      suma += arr[i];
    }
  printf("La suma de los elementos es: %d\n", suma);

  return 0;

 } 
