#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int res;
char str1[]="holASSS";
char str2[]="holAS";

res = strcmp(str1, str2);
printf("%d",res);
if(res == 0){
    printf("las palabras son iguales \n %d", res);
}
else if(res < 0 ){
    printf("la palabra1 es mENor \n %d", res);
    }else{
    printf("la palabra1 es mAYor \n %d", res);
    }
return 0;
}