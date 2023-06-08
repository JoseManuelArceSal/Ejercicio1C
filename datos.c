#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,i;
int*arreglo;

printf("ingrese el tamaño de arreglo");
scanf("%d,",&x);

arreglo=(int*)malloc(x* sizeof(int));
for(i = 0; i < x ; i++){
    printf("ingrese elemento %d",i);
    scanf("%d",&arreglo[i]);
}
printf("los valores ingresados\n");
for(i=0;i<x;i++){
    printf("%d:",arreglo[i]);
}
free(arreglo);
return 0;
}