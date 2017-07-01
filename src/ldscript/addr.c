#include <stdio.h>
#include <stdlib.h>

extern int *stext,  *etext;
extern int *srdata, *erdata;
extern int *sdata,  *edata;
extern int *sbss,   *ebss;

int dummy = 12345;

int main()
{
  printf("*text = %p, %p\n", stext, etext);
  printf("*data = %p, %p\n", sdata, edata);
  printf("text  = %p, %p\n", &stext,  &etext);
  printf("rdata = %p, %p\n", &srdata, &erdata);
  printf("data  = %p, %p\n", &sdata,  &edata);
  printf("bss   = %p, %p\n", &sbss,   &ebss);
  exit (0);
}
