
#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 10

void calcularMultiplicativo(int matriz[][COLS], int *multiplicaivos){
    int i, j;

    for (i=0; i<ROWS; i++){
        for (j=0; j<COLS; j++){
            int producto = 1;

            if (matriz[i][j] != 0){
                producto = matriz[i][j];

            }
            multiplicaivos[i * COLS + j]=producto;
        }
    }
}
int main(){
    int matriz[ROWS][COLS];
    int *multiplicativos;
    int i, j;

    for ( i = 0; i < ROWS; i++){
        for ( j = 0; j < COLS; j++){
            matriz[i][j] = i * j;
        }    
    }
    multiplicativos = (int *) malloc (ROWS * COLS * sizeof(int));
    calcularMultiplicativo(matriz, multiplicativos);

    printf("\nMatriz:\n");
    for ( i = 0; i < ROWS; i++){
        for ( j = 0; j < COLS; j++){
           printf("%3d ", *(multiplicativos + i * COLS + j));
        }
        printf("\n");
    }
    free(multiplicativos);
    return 0;
}
