#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int j;
    int n;
    printf("numero n");
    scanf("&d", &n);
    for (i=n; i>=1; i--){
    for(j=i; j>=1; j--){
printf("*");
    }
        printf("\n");
}
return 0;
}