#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 5;
  b = 6;
  printf("la resta de %d - %d es %d\n",a,b,resta(a,b));
  printf("la multiplicación de %d * %d es %d\n",a,b,multiplicar(a,b));
  printf("Entera la división de %d / %d es %d\n",a,b,dividir(a,b));
  printf("Flotante la división de %d / %d es %f\n",a,b,(float) dividir(a,b));
}

