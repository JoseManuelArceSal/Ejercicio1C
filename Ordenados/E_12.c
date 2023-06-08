#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double hip=100;
    double ang=45;
    double cateto=45;
    double cat_opuesto;
    double cat_ayasen;
    double at;
    double ac;
    cat_opuesto=sin(ang*PI/180)*100;
    printf("Cateto opuesto =%3f\n",cat_opuesto);
    cat_ayasen=cos(ang*PI/180)*180;
    printf("Cateto ayacente = %3f\n",cat_ayasen);
    at=((cat_opuesto*cat_ayasen)/2);
    printf("El area del triangulo es %3f\n",at);
    ac=(at/2);
    printf("El area del cuadrado es %3f\n",ac);
    return 0;
}