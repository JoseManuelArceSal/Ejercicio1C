#include<stdio.h>
#include <stdlib.h>

int main(void)
{
int i,n,p;
char * buffer;
printf("Teclea la longitud de cadena");
scanf("%d,", &i);

buffer = (char*)malloc((i+1)*sizeof(char));
if (buffer==NULL)exit(1);


for(n=0;n<i;n++){
    printf("ngrese el valor de la cadena");
    scanf("%d",&n);
}
printf("ingrese caracter");
for(n=0;n<i;n++){
    printf("%d",buffer[n]);
}
free(buffer);
system("Pause");
}