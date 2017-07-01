#include <stdio.h>
#include <elf.h>
#include <stdlib.h>
#include "../linuxelf.h"

int main()
{
  Elf_Ehdr *ehdr;
  extern int __executable_start;

  ehdr = (Elf_Ehdr *)&__executable_start;

  printf("0x%02x%c%c%c\n",
	 ehdr->e_ident[EI_MAG0],
	 ehdr->e_ident[EI_MAG1],
	 ehdr->e_ident[EI_MAG2],
	 ehdr->e_ident[EI_MAG3]);
  exit (0);
}
