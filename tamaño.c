#include<stdio.h>
#include <stdlib.h>

int main(void)
{
int i,n;
char * buffer;
printf("Teclea la longitud de cadena");
scanf("%d,", &i);
buffer = (char*)malloc((i+1)*sizeof(char));

if (buffer==NULL)exit(1);

for(n=0;n<i;n++)
buffer[n]=rand()%26 +'a';

buffer[i] ='\0';

printf("random string %s\n",buffer);
free(buffer);

system("Pause");
}