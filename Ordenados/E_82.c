#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int i,n;
int *buffer,*p_buffer;
printf("Teclea la longuitud del arreglo");
scanf("%d",&n);
buffer=(int*)malloc((n)*sizeof(int));
if(buffer==NULL)exit(i);
p_buffer=buffer;
for(i=0;i<n;i++){
    printf("Ingresa el valor %d\n",i);
    scanf("%d",p_buffer);
}
p_buffer=buffer;
printf("\nLos valores son\n");
for(n=0;n<i;n++){
  printf("arreglo %s\n");
}
return  0;
}