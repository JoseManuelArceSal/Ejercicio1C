#include <stdio.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    double time=0.1;
    clock_t begin=clock();
    system("gedit");
    clock_t end =clock();
    time +=(double )(end - begin)/CLOCKS_PER_SEC;
    printf("EL TIEMPO ES DE :%F \n", time );
    return 0;
}