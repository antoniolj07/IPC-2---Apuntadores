#include <stdio.h>

int main(void) {
  int v = 18, w = 21;
  const int *ptr = &v;
  ptr = &w;
  // *ptr = 16;
  w = 3;
  return 0;
}