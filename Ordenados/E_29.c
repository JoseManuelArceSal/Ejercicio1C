
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c,p,area;
    printf("Programa que calcula el area de un triangulo.\n\n");
    printf("Ingresa la longitud del lado 1: ");
    scanf("%f", &a);
    printf("Ingresa la longitud del lado 2: ");
    scanf("%f", &b);
    printf("Ingresa la longitud del lado 3: ");
    scanf("%f", &c);

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p- b) * (p- c));
    printf("El area del triangulo es: %f", area);


    return 0;
}