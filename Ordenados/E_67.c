#include <stdio.h>
#include <stdlib.h>
//con estructura swich case hacer operaciones basicas resta, suma, multiplicacion
int main(){
    float x;
    int i;
    float num1,num2;
    printf("Ingresa el numero 1 \n");
    scanf("%f",&num1);
    printf("Ingreas el numero 2 \n");
    scanf("%f",&num2);
    
    printf("Ingresa la operacion que desa realizar: 1-suma,2-resta,3-multiplicacion \n");
    scanf("%d",&i);

    //estructura swhich 
    switch (i)
    {
    case 1:
            x=num1+num2;
            printf("%f",x);
         break;
        
    case 2:
            x=num1-num2;
            printf("%f",x);
        break;
        
    case 3:
            x=num1*num2;
            printf("%f",x);
        break;

        
    
    default:
    printf("Opcion no valida ");
        break;
    }
    system("pause");
    return 0;
}

