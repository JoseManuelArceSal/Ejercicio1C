#include <stdio.h>
#include <stdlib.h>
int main(){
    int hst;
    int sse;
    int ph;
    int ss;
  printf("Horas semanales trabajadas:\n");
  scanf("%d",&hst);
  printf("Pago por hora \n");
  scanf("%d",&ph);
  ss=(hst*ph);
  if(hst<=40){
      printf("El sueldo semanal es : $ %d\n",ss);
  }else if(hst>40){
       sse=(1.5*(hst-40)*ph);
       printf("El sueldo extra es:$ %d\n",sse);
       ss=(40*ph+(ph*1.5*(hst-40)));
       printf("sueldo total semanal con extra es de :$ %d\n",ss);

  }
  return 0;
}