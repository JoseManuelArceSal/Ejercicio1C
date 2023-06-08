# include <stdio.h>
#include <stdlib.h>
 #define MAX 25

 int main(){
int pi ,pt;
int i;
char palabra[MAX],car;

printf("\n introdusca una palabra");
scanf("%c", &car);
i=0;
while (i<MAX && car != '.')

{
palabra[i] = car;
i++;
scanf("%c", &car);

}
pi=0;
pt=i-1;
while (pi < pt && palabra[pi]== palabra[pt])
{
    pi ++;
    pt--;

}
if (pi>=pt)

    printf("La palabra es palindroma");
    else
    printf("La pala bra no es palindroms");
    return 0;
 }