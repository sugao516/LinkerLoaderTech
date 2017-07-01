#include <stdio.h>
#include <stdlib.h>

int stext = 1;
extern int srdata;

int main()
{
  printf("text  = %d, %p\n", stext,  &stext);
  printf("rdata = %d, %p\n", srdata, &srdata);
  exit (0);
}
