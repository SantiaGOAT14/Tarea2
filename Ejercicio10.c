#include<stdio.h>
int main ()
{
  int num, i, positivos, negativos, nulos;
  printf("Ingrese 100 números naturales \n ");
  for(i = 1; i <= 100; i++){
  scanf("%d", &num);

  if (num > 0) {
    positivos++;
  } else if (num < 0) {
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
