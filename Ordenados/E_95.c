//Arreglo que imprima tabla de multiplicar de esa numero 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i=i,tabla=1,limite=1;
    int *liimite=NULL;

    printf("Ingresa el numero de la tabla que desea conocer");
    scanf("%d",&tabla);
    printf("Ingresa el limite de operaciones");
    scanf("%d",&limite);

    liimite=malloc(limite*sizeof(int));
    for(; i<limite;i++){
          *(liimite+1)=1*tabla;
        }
    for(i=0;i<limite;i++){
        printf("\n %2d x %2d=%2d",tabla,i,*(liimite+1));
    }
     free(liimite);
    printf("\n\n");
    return 0;

    }
