#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
   char cad[100];
    int x,a;
    int i;
   printf("Introduce palabra \n");
    scanf("%s",cad);
   a = strlen(cad);
   x = a * a;
   printf("la palabra tiene %d \n", a);
   printf("la longitud de :%d %d \n", a, x);
     if (x == 16 ){
        for (i=1;i<=x; i++){
        printf("*");
        if(i%4 == 0 ){
        printf("\n");
   }
}
}
return 0;
}