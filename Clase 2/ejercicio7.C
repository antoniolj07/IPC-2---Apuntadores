#include <stdio.h>

int *ptr_int, var;

void int_ptr() {
  int local = 57;
  ptr_int = &local;
  var = *ptr_int;
  *ptr_int = 20;
}

int main(void) {
  int_ptr();
  var = *ptr_int;
  *ptr_int = 20;
  return 0;
}