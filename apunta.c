# include <stdio.h>
int *p , y;
void func(){

    int x = 40;
    p = &x;
    y = *p;
    *p = 23;

}
int main(void)
{
    func();
    y=*p;
    *p =25;
    printf("Elvalor de y es  %d \n Elvalor de *p es %d \n el valor de p es %p",y , *p, p);

}
