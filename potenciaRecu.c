# include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y;
    int max;
x=2;
y=3;

max = potencia(x,y);
printf("la pontencia es %d" , max);
system ("Pause");
return 0; 
}
int potencia(int a , int b ){
    if( b < 1)
    return 1;
    return a * potencia (a,b-1);
}