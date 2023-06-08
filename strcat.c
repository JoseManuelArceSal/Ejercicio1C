#include <string.h>
#include <stdio.h>
#include<stdlib.h>

int main(){

    char origen[]= "brisas";
    char destino [11] ="para";
    strcat(destino, origen);
    printf("destino; %s",destino);
    
    return 0;
}
