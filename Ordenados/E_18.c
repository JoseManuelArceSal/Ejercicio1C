#include <stdio.h>
#include <stdlib.h>
 int main(){
int num=0;
int x;
int y;
while(num<=500){
printf("%d",num);
x=num*num;
y=num*num*num;
num++;
printf("%d,",x);
printf("%d,",y);

}
return 0;

 }