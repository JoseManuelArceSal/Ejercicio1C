#include <stdio.h>
#include <stdlib.h>

int main (){
    int min = 60;
    int hora = 60;
    int dia = 24;
    int anio =365 * 20 ;

    // quiero imprimir cantidad de segundos
    printf("La cantidad de segundos que e vivido ");
    printf("%d ", anio *dia *hora * min);
    printf("\n");
    system("Pause");
    return 0;

}