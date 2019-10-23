#include <stdio.h>
#include <stdlib.h>

int main() {
  fprintf(stderr, "Numeros primos del 1 al 100\n");
  for (int i = 2; i < 100; i++) {
    printf("%d\n", i);
  }
  printf("%d\n",-1);
}