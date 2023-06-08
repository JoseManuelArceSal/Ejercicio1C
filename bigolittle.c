
#include <stdio.h>
                     
 int main()
 {
unsigned int i = 1;
char *c = (char*)&i;
if (*c){   
printf("big endian");
}else{
printf("litlle endian");
}
getchar();
return 0;
}
                     
