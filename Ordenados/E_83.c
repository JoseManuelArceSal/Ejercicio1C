#include <stdio.h>
#include <stdlib.h>
//Eleguir un caso con estructura  Swhich case 
int main(){
    int casos;
    printf("ingresa un numero\n");
    scanf("%i",&casos);
    switch (casos)
    {
        case 1:
        printf("Tu eleccion fue el primer coso");
        break;

        case 2:
        printf("Tu eleccion fue el segundo caso");
        break;

        case 3:
         printf("Tu eleccion fue es tercer caso");
        break;

        case 4:
         printf("Tu eleccion fue es cuarto caso");
        break;

        default:
        printf("No se encontro tu caso\n");
        break;
    }
    
    return 0;
    }
