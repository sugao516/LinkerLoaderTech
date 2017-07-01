#include <stdio.h>
#include <stdlib.h>

int stext  = 1;
int srdata = 1;
extern int sdata;

int main()
{
  printf("&stext  = %p, stext  = 0x%08x\n", &stext,  stext);
  printf("&srdata = %p, srdata = 0x%08x\n", &srdata, srdata);
  printf("&sdata  = %p, sdata  = 0x%08x\n", &sdata,  sdata);
  exit (0);
}
