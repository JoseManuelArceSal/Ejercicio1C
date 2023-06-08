#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int main(){ 
   char palabra[MAX];
   int letra[26]={0};
   int i,l;
   printf("Ingresa una palabra \n");
   scanf("%s",palabra);
   l=strlen(palabra);
   for(i=0;i<l;i++){
       if(isalpha(palabra[i])){
               letra[tolower(palabra[i]) -'a']++;
       }
   } for(i=0;i<26;i++){
                if(letra[i]>0){
                            printf("la letra %c aparece %d veces.\n",'a'+i,letra[i]);
                }
   }
return 0;
    }

 