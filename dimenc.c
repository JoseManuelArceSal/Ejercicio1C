#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main(){
	double a,b,c,p;
	double res;
	printf("Ingrese la primera dimencion: \n");
	scanf("%le",&a);
	printf("Ingrese la segunda dimencion: \n");
	scanf("%le",&b);
	printf("Ingrese la tercer dimencion: \n");
	scanf("%le",&b);
	
	p=((a+b+c)/2);
	res= sqrt(p*((p-a)*(p-b)*(p-c)));
	printf("Area es: %f\n",res);
	return 0;
}