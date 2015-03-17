//Arreglos de textos

#include <stdio.h>
#include <string.h>

int main(void){

  char nombre[256];
  char apellido[256];
  char apodo[256];
  int yr;

  //
  printf("Basura en el string nombre: %s\n",nombre);
  printf("Basura en el string apellido: %s\n",apellido);
  printf("Basura en el string apodo: %s\n", apodo);
  printf("Basuen yr %d\n", yr);
  //Initialize the string making a copy
  strcpy(nombre, "Jorge");
  strcpy(apellido, "Rausch");
  strcpy(apodo, "Cocinero");
  yr = 1957;
  printf("El Master Chef, despues de inicializar es: %s %s %s\n", nombre, apellido, apodo);
  return 0;
}
