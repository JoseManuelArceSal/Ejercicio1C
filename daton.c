#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int len;
char cad [10];
printf("introduce una palabra \n");
scanf("%s",cad);
len = strlen(cad);
for(int i =i;i<=len;i++){
    for(int b=1; b<= len;b++){
        printf("*\t");
    }
    printf("\n");
}
printf("\n");
system ("Pause");
return 0;
}