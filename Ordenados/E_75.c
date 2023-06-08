#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len;
    char cad[]="Es una cadena";
    len =strlen(cad);
    printf("LA longuitud de :'\%s\'es:%d\n",cad,len);
    return 0;
}