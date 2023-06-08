#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
double i;
   double len;
   char cad[100];
   printf("Introduce palabra \n");
    scanf("%s",cad);
   len = strlen(cad);
   printf("la longitud de : %s\es: %d \n", cad, len);
   for (i=0;i<len; i++){
    printf("*");
   }
   return 0 ;
}