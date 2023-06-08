#include<stdio.h>
#include<stdlib.h>


struct CD
{
char titulo[100];
char artis[50];
};
int main(void){
    struct CD cd1;
    printf("ingrese titulo");
    gets(cd1.titulo);
    printf("%s\n",cd1.titulo);
    return 0;
      
}
