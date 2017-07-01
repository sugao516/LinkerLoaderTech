% readelf -a sample_pic.o
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              REL (Relocatable file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x0
  Start of program headers:          0 (bytes into file)
  Start of section headers:          1688 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           0 (bytes)
  Number of program headers:         0
  Size of section headers:           64 (bytes)
  Number of section headers:         13
  Section header string table index: 10

Section Headers:
  [Nr] Name              Type            Address          Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            0000000000000000 000000 000000 00      0   0  0
  [ 1] .text             PROGBITS        0000000000000000 000040 0000d5 00  AX  0   0  1
  [ 2] .rela.text        RELA            0000000000000000 000420 0001e0 18   I 11   1  8
  [ 3] .data             PROGBITS        0000000000000000 000118 000008 00  WA  0   0  4
  [ 4] .bss              NOBITS          0000000000000000 000120 000004 00  WA  0   0  4
  [ 5] .rodata           PROGBITS        0000000000000000 000120 000075 00   A  0   0  1
  [ 6] .comment          PROGBITS        0000000000000000 000195 00002d 01  MS  0   0  1
  [ 7] .note.GNU-stack   PROGBITS        0000000000000000 0001c2 000000 00      0   0  1
  [ 8] .eh_frame         PROGBITS        0000000000000000 0001c8 000058 00   A  0   0  8
  [ 9] .rela.eh_frame    RELA            0000000000000000 000600 000030 18   I 11   8  8
  [10] .shstrtab         STRTAB          0000000000000000 000630 000061 00      0   0  1
  [11] .symtab           SYMTAB          0000000000000000 000220 0001b0 18     12  12  8
  [12] .strtab           STRTAB          0000000000000000 0003d0 000049 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

There are no section groups in this file.

There are no program headers in this file.

Relocation section '.rela.text' at offset 0x420 contains 20 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
000000000000000e  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata - 4
0000000000000013  0000000f00000004 R_X86_64_PLT32         0000000000000000 puts - 4
000000000000001a  0000000c0000002a R_X86_64_REX_GOTPCRELX 0000000000000000 extvalue - 4
0000000000000025  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata + 3
000000000000002f  0000001000000004 R_X86_64_PLT32         0000000000000000 printf - 4
0000000000000036  0000000d0000002a R_X86_64_REX_GOTPCRELX 0000000000000004 extbssvalue - 4
0000000000000041  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata + 1c
000000000000004b  0000001000000004 R_X86_64_PLT32         0000000000000000 printf - 4
0000000000000051  0000000300000002 R_X86_64_PC32          0000000000000000 .data + 0
000000000000005a  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata + 35
0000000000000064  0000001000000004 R_X86_64_PLT32         0000000000000000 printf - 4
000000000000006a  0000000400000002 R_X86_64_PC32          0000000000000000 .bss - 4
0000000000000073  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata + 4e
000000000000007d  0000001000000004 R_X86_64_PLT32         0000000000000000 printf - 4
0000000000000084  0000000c0000002a R_X86_64_REX_GOTPCRELX 0000000000000000 extvalue - 4
0000000000000092  0000000d0000002a R_X86_64_REX_GOTPCRELX 0000000000000004 extbssvalue - 4
000000000000009c  0000000300000002 R_X86_64_PC32          0000000000000000 .data + 0
00000000000000a4  0000000400000002 R_X86_64_PC32          0000000000000000 .bss - 4
00000000000000ba  0000000700000002 R_X86_64_PC32          0000000000000000 .rodata + 67
00000000000000bf  0000000f00000004 R_X86_64_PLT32         0000000000000000 puts - 4

Relocation section '.rela.eh_frame' at offset 0x600 contains 2 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000000020  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 0
0000000000000040  0000000200000002 R_X86_64_PC32          0000000000000000 .text + ac

The decoding of unwind sections for machine type Advanced Micro Devices X86-64 is not currently supported.

Symbol table '.symtab' contains 18 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS sample.c
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    3 
     4: 0000000000000000     0 SECTION LOCAL  DEFAULT    4 
     5: 0000000000000004     4 OBJECT  LOCAL  DEFAULT    3 value
     6: 0000000000000000     4 OBJECT  LOCAL  DEFAULT    4 bssvalue
     7: 0000000000000000     0 SECTION LOCAL  DEFAULT    5 
     8: 0000000000000000   172 FUNC    LOCAL  DEFAULT    1 func
     9: 0000000000000000     0 SECTION LOCAL  DEFAULT    7 
    10: 0000000000000000     0 SECTION LOCAL  DEFAULT    8 
    11: 0000000000000000     0 SECTION LOCAL  DEFAULT    6 
    12: 0000000000000000     4 OBJECT  GLOBAL DEFAULT    3 extvalue
    13: 0000000000000004     4 OBJECT  GLOBAL DEFAULT  COM extbssvalue
    14: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND _GLOBAL_OFFSET_TABLE_
    15: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND puts
    16: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND printf
    17: 00000000000000ac    41 FUNC    GLOBAL DEFAULT    1 extfunc

No version information found in this file.
% 
