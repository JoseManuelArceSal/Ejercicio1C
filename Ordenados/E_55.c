#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len, i, j;
    char palabra[10] ;
    printf("Escribe una palabra");
    scanf("%s", palabra);
    len=strlen(palabra);
    for (i=0; i< len; i++)
    {
        for (j = 0; j < len; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    }