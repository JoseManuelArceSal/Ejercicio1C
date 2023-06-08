#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    int *apun;
    int tamaño;
    
    printf("Dijite el total de elementos que tendra el arreglo");
    scanf("%i",&tamaño);
          apun=malloc(tamaño*sizeof(int));
    for(i=0;i<tamaño;i++){
        printf("Dijite el elemento:");
        scanf("%i",&apun[i]);
        }
    printf("Contenido del arreglo :");
    for(i=0;i<tamaño; i++){
          printf("%i",apun[i]);
    }
    free(apun);
    return 0;
}