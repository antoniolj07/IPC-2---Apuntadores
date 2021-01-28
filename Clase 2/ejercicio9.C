#include <stdio.h>

int main(void) {
  int a = 10, b = 15;
  int *const ptr = &a;
  *ptr = 3;
  ptr = &b;
  return 0;
}