#include <stdio.h>
#include <stdlib.h>

extern int data_start;
extern int edata;
extern int end;

int main()
{
  printf("&data_start       = %p\n", &data_start);
  printf("&edata            = %p\n", &edata);
  printf("&end              = %p\n", &end);
  exit (0);
}
