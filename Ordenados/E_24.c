#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int lineas;
    printf("Ingresa la cantidad a la que desea llagar \n ");
    scanf("%d", &lineas);
    int i;
    for (i = lineas; i <= 1; i--)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

