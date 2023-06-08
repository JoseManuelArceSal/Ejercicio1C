#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char len1[10];
char len2[10];
printf("Introduce palabra 1");
scanf("%s",len1);
printf("Introduce palabra 2");
scanf(" %s",len2);
printf("Antes de invertir la palabra  \n");
printf(" %s \n, %s \n", len1 , len2);
printf("Despues de invertir la palabra");
printf("primera palabra: %s \n", len2);
strcpy(len2,len1);
printf("segunda palabra: %s \n", len1);

return 0;

}