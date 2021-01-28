#include <stdio.h>

int main(void) {
  struct articulo {
    char nombre[20];
    char descripcion[100];
    float precio;
  };

  struct articulo art;
  struct articulo *ptr_art = &art;

  (*ptr_art).precio = 50.38;
  ptr_art->precio = 50.38;

  printf("Precio: %f", ptr_art->precio);

  return 0;
}