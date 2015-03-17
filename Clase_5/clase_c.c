//Lo escribio el man en clase: Dos maneras de hacer asignacion de funciones

#include <stdio.h>
#include <stdlib.h>
void bad_funtion(int *list, int n_points);
int * good_funtion(int n_points);

int main(void){

  int *lista;
  int n_points = 100;
  lista = NULL;

  //1 funcion
  bad_funtion(lista, n_points);

  if(!lista){
    printf("the array is not allocated yet (address %p)\n", lista);
      }else{
    printf("the array has been allocated (address %p)\n", lista);
  }

  lista = good_funtion(n_points);

  /*did ir work*/
  if(!lista){
    printf("the array is ot allocated yet (address %p)\n", lista);
      }else{
    printf("the array has been allocated (address %p)\n", lista);
  }

  return 0;
}

void bad_funtion(int *list, int n_points){
  list = malloc(n_points * sizeof(int));
}

int * good_funtion(int n_points){
  int *array;
  array = malloc(n_points * sizeof(int));
  return array;
}
