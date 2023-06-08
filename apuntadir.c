#include <stdlib.h>
#include <stdio.h>

int main (void){
    int i,n;
    int *buffer, *P_buffer;
    printf("Telcle la longitud del arreglo");
    scanf("%d", &n);

    buffer = (int*) malloc((n)* sizeof(int));
    if (buffer==NULL) exit (1);
    P_buffer=buffer;
    for(i=0;i<n;n++){
        printf("ingresar el valor");
        scanf("%d", P_buffer++);
    }
    P_buffer =buffer;
    printf("\n Los valores son \n");
    for(n=0; n<i; n++){
        printf("arreglo[%d]=%d\n", n,*P_buffer++);
    }
    free(buffer);
    system("Pause");
}