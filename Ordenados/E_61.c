#include <stdio.h>
#include <string.h>
int main(){
    char palabra1[20];
    char palabra2[20];
    int res;
    printf("Escribe la palabra 1:");
    scanf("%s",palabra1);
    printf("Escribe la palabra 2:");
    scanf("%s",palabra2);
      res =strcmp(palabra1,palabra2);
      if (res==0){
        printf("las palabras son iguales");
      }else if(res<=0){
        
        printf("La mayorpalabra es %s\n",palabra1);
      }else{
       
        printf("La menor palabra es  %s\n",palabra2);
      }
return 0;

}