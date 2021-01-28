#include <stdio.h>

int main(void) {
  int x = 33, y;
  int *p;
  p = &x;
  printf("La direccion de x es: %d", *p);
  y = *p + 3;
  
  return 0;
}