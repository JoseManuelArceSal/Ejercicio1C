#include <stdio.h>
#include <arpa/inet.h>
int main ()
{
  unsigned int x = 0x76543210;
  unsigned char *p = (unsigned char *)&x;
  

  if (htonl(1)  == 1)
  {
    printf (" La arquitectura es little endian. \n");
  }
  else
  {
     printf ("La arquitectura es  big endian. \n");
  }
 printf("el orden es 0x%x",x ,p[0],p[1],p[2],p[3]);
  return 0;
}5