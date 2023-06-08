#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
    double latencia;
    double time= 0.0;
 clock_t begin =clock();
  system ("gedit");
 clock_t end =clock();
 time += (double)(end - begin) /CLOCKS_PER_SEC;
 latencia = time * 10000;
 printf(" el tiempo es de %f ", time);
 printf("ciclos %f",latencia);

 return 0;

}