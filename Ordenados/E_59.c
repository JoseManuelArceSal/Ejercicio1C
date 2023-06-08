#include <stdio.h>
#include <string.h>
int main(){
    
    char palabra1[20];
    char palabra2[20];
    
    printf("Escribe la palabra 1:");
    scanf("%s",palabra1);
    printf("Escribe la palabra 2:");
    scanf("%s",palabra2);
     int longitud=strlen(palabra1);
    
    printf("La longuitud de primera palabra es :%d\n",longitud);
    printf("la primera palabra es %d veses la primera palabra es:",longitud);
   for (int i=0;i<longitud;i++){
    printf("%s",palabra2);
   }
printf("\n");
    return 0;
}