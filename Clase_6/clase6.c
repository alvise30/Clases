#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

  FILE *in;
  float A;
  int r=0;
  char filename[30] = "cubo3D.dat";
  do{
    A = M_PI*pow(r,2);
    r++;
    //printf("%f \n", A);
  }while(A<100);

  //Numeros Aleatorios

  in = fopen(filename, "w");

  int i;
  float x;
  float y;
  float z;
  for(i=0; i<1000; i++){
    x = drand48()*10;
    y = drand48()*10;
    z = drand48()*10;
    fprintf(in, "%f \t %f \t %f \n", x, y, z);
  }
  fclose(in);

  //Caminatas Aleatorias

  int radio = 10;
  float a, b, r;
  do{
    a = drand48();
    b = drand48();
    r = sqrt((pow(a,2)+pow(b,2)));
    if(r<radio || r=radio){
    
    }
  }


  return 0;
}
