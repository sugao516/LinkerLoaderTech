#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include "../linuxelf.h"

int main(int argc, char *argv[])
{
  int fd, i;
  struct stat sb;
  char *head;
  Elf_Ehdr *ehdr;
  Elf_Shdr *shdr;
  Elf_Shdr *shstr;

  fd = open(argv[1], O_RDONLY);
  fstat(fd, &sb);
  head = mmap(NULL, sb.st_size, PROT_READ, MAP_SHARED, fd, 0);

  ehdr = (Elf_Ehdr *)head;

  if (!IS_ELF(*ehdr)) {
    fprintf(stderr, "This is not ELF file. (%s)\n", argv[1]);
    exit (1);
  }

  shstr = (Elf_Shdr *)(head + ehdr->e_shoff +
		       ehdr->e_shentsize * ehdr->e_shstrndx);

  for (i = 0; i < ehdr->e_shnum; i++) {
    shdr = (Elf_Shdr *)(head + ehdr->e_shoff + ehdr->e_shentsize * i);
#if 1
    printf("%s\n", (char *)(head + shstr->sh_offset + shdr->sh_name));
#else
    printf(" %-17s", (char *)(head + shstr->sh_offset + shdr->sh_name));
    printf(" :sh_name=%2d", shdr->sh_name);
    printf(" %-15s", SHT_STR(shdr->sh_type));
    printf(" %016lx", shdr->sh_addr);
    printf(" %06lx", shdr->sh_offset);
    printf(" %06lx", shdr->sh_size);
    printf(" %02lx", shdr->sh_entsize);
	{
		void flags_to_keys(Elf64_Xword sh_flags, char *keys);
		char keys[16] = {0};
		flags_to_keys(shdr->sh_flags, keys);
	    printf(" %3lx:%3s", shdr->sh_flags, keys);
	}
    printf(" %2d", shdr->sh_link);
    printf(" %3d", shdr->sh_info);
    printf(" %2ld", shdr->sh_addralign);
    printf("\n");
#endif
  }

  munmap(head, sb.st_size);
  close(fd);

  exit (0);
}

void flags_to_keys(Elf64_Xword sh_flags, char *keys)
{
/*
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)
*/
	const Elf64_Xword flag_key[][2] = {
	{	SHF_WRITE				,	'W'	},	/* Section contains writable data. */
	{	SHF_ALLOC				,	'A'	},	/* Section occupies memory. */
	{	SHF_EXECINSTR			,	'X'	},	/* Section contains instructions. */
	{	SHF_MERGE				,	'M'	},	/* Section may be merged. */
	{	SHF_STRINGS				,	'S'	},	/* Section contains strings. */
	{	SHF_INFO_LINK			,	'I'	},	/* sh_info holds section index. */
	{	SHF_LINK_ORDER			,	'L'	},	/* Special ordering requirements. */
	{	SHF_OS_NONCONFORMING	,	'O'	},	/* OS-specific processing required. */
	{	SHF_GROUP				,	'G'	},	/* Member of section group. */
	{	SHF_TLS					,	'T'	},	/* Section contains TLS data. */
	{	SHF_MASKOS				,	'o'	},	/* OS-specific semantics. */
	{	SHF_MASKPROC			,	'p'	},	/* Processor-specific semantics. */
	{	-1						,	'x'	},	/* unknown. */
	};
	int i;
	for (i=0; i<sizeof(flag_key)/sizeof(flag_key[0]); i++) {
		Elf64_Xword flag = flag_key[i][0];
		int key = flag_key[i][1];
//	printf(":sh_flags=%x:flag=%08x:key=%c\n", sh_flags, flag, key);
		if((sh_flags & flag) != 0) {
			*keys++ = key;
			sh_flags &= ~flag;
			if(sh_flags == 0) {
				break;
			}
		}
	}
}
