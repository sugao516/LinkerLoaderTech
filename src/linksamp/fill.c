#include <stdio.h>
#include <stdlib.h>

extern int cvalue;
extern int svalue;
extern int lvalue;
extern int lvalue2;

int main()
{
  printf("&cvalue = %p, cvalue = 0x%08x\n", &cvalue, cvalue);
  printf("&svalue = %p, svalue = 0x%08x\n", &svalue, svalue);
  printf("&lvalue = %p, lvalue = 0x%08x\n", &lvalue, lvalue);
  printf("&lvalue2 = %p, lvalue2 = 0x%08x\n", &lvalue2, lvalue2);
  exit (0);
}
