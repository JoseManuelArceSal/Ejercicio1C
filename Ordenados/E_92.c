#include <stdio.h>
#include <arpa/inet.h>
int main(){
unsigned int x=0x12345678;
unsigned char *p=(unsigned char*)&x;
if(htonl(1)==1){
    printf("Es Little endial.\n");

}else{
    printf("Es Big endial.\n");
    }
printf("Valor 0x%x  y el orden de los bytes es:0x%x 0x%x 0x%x 0x%x\n",x,p[0],p[1],p[2], p[3]);
 return 0;
}

