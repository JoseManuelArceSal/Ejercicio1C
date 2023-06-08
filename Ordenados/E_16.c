#include <stdio.h>
#include <stdlib.h>
int main(){
    int antig;
    int suel;
    int x;
    printf("Años de atiguedad\n");
    scanf("%d",&antig);
    if(antig>=5){
        printf("Sueldo\n");
        scanf("%d",&suel);
        x=(suel*100)/10;
        if(x>=1000){
            printf("Aceptado felicitaciones\n");
        }
    }else 
    printf("NO FUE ACEPTADO");
    
}