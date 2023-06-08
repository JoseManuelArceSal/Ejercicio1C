#include <stdio.h>
#include <stdlib.h>
//Calcular los dias de los mese del año
int main(){
    int mes;
    printf("Escribe el numero de mes del (1 al 12)\n");
    scanf("%d",&mes);
    switch (mes)
    {
    case 1:
            printf("El mes es Enero\n");
            printf("Tiene un total de 31 dias\n");
        break;
    case 2:
    printf("El mes es Febrero\n");
            printf("Tiene un total de 28 dias\n");
    
        break;
    case 3:
    printf("El mes es Marzo\n");
            printf("Tiene un total de 31 dias\n");
    
        break;
    case 4:
    printf("El mes es Abril\n");
            printf("Tiene un total de 30 dias \n");
        break;
    case 5:
    printf("El mes es Mayo\n");
            printf("Tiene un total de 31 dias \n");
        break;
    case 6:
    printf("El mes es Junio\n");
            printf("Tiene un total de 30 dias \n");
    
        break;
    case 7:
    printf("El mes es Julio\n");
            printf("Tiene un total de 31 dias \n");
    
        break;
    case 8:
    printf("El mes es Agosto\n");
            printf("Tiene un total de 31 dias \n");
    
        break;
    case 9:
    printf("El mes es Septiembre\n");
            printf("Tiene un total de 30 dias \n");
    
        break;
    case 10:
    printf("El mes es Octubre\n");
            printf("Tiene un total de 31 dias \n");
    
        break;
    case 11:
    printf("El mes es Noviembrn\n");
            printf("Tiene un total de 30 dias \n");
    
        break;
    case 12:
    printf("El mes es Diciembre\n");
            printf("Tiene un total de 30 dias \n");
        break;
    
    default:
    printf("No se encotro resultados el numero que ingreso no corresponde a ningun mes  ");
        break;
    }

 system("pause");
 return 0;
}