#ifndef __FBSD_TO_LINUX__
#define __FBSD_TO_LINUX__

#include <sys/cdefs.h>
#define CONCAT(x,y) __CONCAT(x,y)
#define    roundup2(x, y)  (((x)+((y)-1))&(~((y)-1))) /* if y is powers of two */

#define	__ELF_WORD_SIZE	__WORDSIZE

#define	ELF_CLASS	CONCAT(ELFCLASS,__ELF_WORD_SIZE)

#if BYTE_ORDER == LITTLE_ENDIAN
#define	ELF_DATA	ELFDATA2LSB
#elif BYTE_ORDER == BIG_ENDIAN
#define	ELF_DATA	ELFDATA2MSB
#else
#error "Unknown byte order"
#endif

#define	__elfN(x)	CONCAT(CONCAT(CONCAT(elf,__ELF_WORD_SIZE),_),x)
#define	__ElfN(x)	CONCAT(CONCAT(CONCAT(Elf,__ELF_WORD_SIZE),_),x)
#define	__ELFN(x)	CONCAT(CONCAT(CONCAT(ELF,__ELF_WORD_SIZE),_),x)
#define	__ElfType(x)	typedef __ElfN(x) CONCAT(Elf_,x)

__ElfType(Addr);
__ElfType(Word);
__ElfType(Ehdr);
__ElfType(Shdr);
__ElfType(Phdr);
__ElfType(Rel);
__ElfType(Rela);
__ElfType(Sym);

/* Non-standard ELF types. */
typedef Elf32_Word     Elf32_Size;
typedef Elf64_Xword    Elf64_Size;
__ElfType(Size);
typedef __ElfN(Nhdr) CONCAT(Elf_,Note);

#define	ELF_R_SYM	__ELFN(R_SYM)
#define	ELF_R_TYPE	__ELFN(R_TYPE)
#define	ELF_ST_BIND	__ELFN(ST_BIND)
#define	ELF_ST_TYPE	__ELFN(ST_TYPE)


#define ELF_TARG_CLASS ELF_CLASS
#define ELF_TARG_DATA  ELF_DATA
#if   __ELF_WORD_SIZE == 32
#define ELF_TARG_MACH  EM_386
#elif __ELF_WORD_SIZE == 64
#define ELF_TARG_MACH  EM_X86_64
#else
#error "Unknown byte order"
#endif
#define ELF_TARG_VER   1

#define IS_ELF(ehdr) \
	((ehdr).e_ident[EI_MAG0] == ELFMAG0 && \
	 (ehdr).e_ident[EI_MAG1] == ELFMAG1 && \
	 (ehdr).e_ident[EI_MAG2] == ELFMAG2 && \
	 (ehdr).e_ident[EI_MAG3] == ELFMAG3)

#define SHT_STR(type) (\
	((type) == SHT_NULL			) ? "NULL"			: \
	((type) == SHT_PROGBITS		) ? "PROGBITS"		: \
	((type) == SHT_SYMTAB		) ? "SYMTAB"		: \
	((type) == SHT_STRTAB		) ? "STRTAB"		: \
	((type) == SHT_RELA			) ? "RELA"			: \
	((type) == SHT_HASH			) ? "HASH"			: \
	((type) == SHT_DYNAMIC		) ? "DYNAMIC"		: \
	((type) == SHT_NOTE			) ? "NOTE"			: \
	((type) == SHT_NOBITS		) ? "NOBITS"		: \
	((type) == SHT_REL			) ? "REL"			: \
	((type) == SHT_SHLIB		) ? "SHLIB"			: \
	((type) == SHT_DYNSYM		) ? "DYNSYM"		: \
	((type) == SHT_INIT_ARRAY	) ? "INIT_ARRAY"	: \
	((type) == SHT_FINI_ARRAY	) ? "FINI_ARRAY"	: \
	((type) == SHT_PREINIT_ARRAY) ? "PREINIT_ARRAY"	: \
	((type) == SHT_GROUP		) ? "GROUP"			: \
	((type) == SHT_SYMTAB_SHNDX	) ? "SYMTAB_SHNDX"	: \
	"")

#endif
