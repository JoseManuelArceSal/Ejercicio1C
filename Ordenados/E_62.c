//INVERTIR CADENA DE CARACTERES 
#include <stdio.h>
#include <string.h>
int main(){
    char cad[100];
    char tem;
    printf("Dijite una cadena de caracteres: \n");
    scanf("%s",cad);
    int i,mitad,len;
    len=strlen(cad);
    mitad=len/2;
    printf("La cadena de caractres origuinal es:%s\n",cad);
    for(i=0;i<mitad;i++){
         tem=cad[i];
         cad[i]=cad[len-i-1];
         cad[len-i-1]=tem;
    }
     printf("La cadena de caractres invertida es:%s\n",cad);
    return 0;
}