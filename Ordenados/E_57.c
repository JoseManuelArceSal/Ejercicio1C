#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char palabra1[100];
    char palabra2[100];
    char origen[100];
    printf("Escribe la palabra 1:");
    scanf("%s",palabra1);
    printf("Escribe la palabra 2:");
    scanf("%s",palabra2);
    
    printf("Antes del intercabio: \n");
    printf("palabra1: %s\n",palabra1);
   printf("palabra2: %s\n",palabra2);
    
    strcpy(origen,palabra1);
    strcpy(palabra1,palabra2);
    strcpy(palabra2,origen);
     printf("Despues del intercabio: \n");
    printf("palabra1: %s\n",palabra1);
    printf("palabra2: %s\n",palabra2);
    
  return 0;
}