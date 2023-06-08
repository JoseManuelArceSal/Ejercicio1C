#include <stdio.h>
#include <stdlib.h>
int main(){
   int a,b,c;
   int  d;
   printf("Escribe el numero");
   scanf("%d",&d);
   for (int a=1; a<=d; a++ ){
       
   for(int b=1;  b<=d; b++ ){
         printf("%d\t",a*b);
   }
    printf("\n");
   } 
return 0;
} 