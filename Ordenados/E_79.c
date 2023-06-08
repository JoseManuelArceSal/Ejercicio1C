#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int i,n;
char *buffer;
printf("Teclea la longuitud de la cadena");
scanf("%d",&i);
buffer=(char*)malloc((i+1)*sizeof(char));
if (buffer==NULL)exit(1);
for(n=0;n<i;n++)
buffer[n]=rand()%26+'a';
buffer[i]='\0';
printf("Random string:%s\n",buffer);
free(buffer);
return 0;
}