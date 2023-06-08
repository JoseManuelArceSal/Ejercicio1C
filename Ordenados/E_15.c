#include <stdio.h>
#include <stdlib.h>
int main(){
//Evaluar una calificacion 
int numero;
 printf("Escribe la calificacion");
 scanf("%d",&numero);
 if(numero >=7){
  printf("Tu calificacion es aprobatoria");
 }else
  printf("Calificacion minima aprobatoria es 8");
return 0;
}