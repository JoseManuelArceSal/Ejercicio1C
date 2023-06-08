#include<stdio.h>
#include <stdlib.h>
#define ROWS 10
#define COLS 10

void calculaMultiplica(int matriz[][COLS], int *multiplicativos){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(i=0; j<COLS;j++){
            int producto=1;
            if(matriz[i][j] !=0 ){
                producto = matriz[i][j];
            }
            multiplicativo[i=COLS+j]=producto;

        }
    }
}
void dibujaMatriz(int matriz[][COLS]){
    int i, j;
    for(i=0; i<ROWS;i++){
        for(j=0; j< COLS; j++){
            priont("%3d", matriz[i][j]);
        }
    }
}
int main(){
    int matriz[ROWS][COLS];
    int *multiplicativo;
    int i,j;

    for(i=0;i<ROWS;j++){
        matriz[i][j]=i *j;
    }
}
multiplicativo = (int *) malloc(ROWS*COLS* sizeof(int));
calculaMultiplica(matriz, multiplicativo);
printf("Matriz original:\n");
dibujaMatriz(matriz);

printf("\n Productos");
for(i=0;i<ROWS;i++){
    for (j=0;j<COLS;j++){
        printf("%3d",("multiplicativos"+1*COLS+j));
    }
    printf("\n");
}
free(multiplicativos);
return 0;

