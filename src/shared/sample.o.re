% readelf -a sample.o
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
  Start of section headers:          1616 (bytes into file)
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
  [ 1] .text             PROGBITS        0000000000000000 000040 0000bd 00  AX  0   0  1
  [ 2] .rela.text        RELA            0000000000000000 0003d8 0001e0 18   I 11   1  8
  [ 3] .data             PROGBITS        0000000000000000 000100 000008 00  WA  0   0  4
  [ 4] .bss              NOBITS          0000000000000000 000108 000004 00  WA  0   0  4
  [ 5] .rodata           PROGBITS        0000000000000000 000108 000075 00   A  0   0  1
  [ 6] .comment          PROGBITS        0000000000000000 00017d 00002d 01  MS  0   0  1
  [ 7] .note.GNU-stack   PROGBITS        0000000000000000 0001aa 000000 00      0   0  1
  [ 8] .eh_frame         PROGBITS        0000000000000000 0001b0 000058 00   A  0   0  8
  [ 9] .rela.eh_frame    RELA            0000000000000000 0005b8 000030 18   I 11   8  8
  [10] .shstrtab         STRTAB          0000000000000000 0005e8 000061 00      0   0  1
  [11] .symtab           SYMTAB          0000000000000000 000208 000198 18     12  12  8
  [12] .strtab           STRTAB          0000000000000000 0003a0 000033 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

There are no section groups in this file.

There are no program headers in this file.

Relocation section '.rela.text' at offset 0x3d8 contains 20 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
000000000000000c  000000070000000a R_X86_64_32            0000000000000000 .rodata + 0
0000000000000011  0000000e00000002 R_X86_64_PC32          0000000000000000 puts - 4
0000000000000017  0000000c00000002 R_X86_64_PC32          0000000000000000 extvalue - 4
000000000000001e  000000070000000a R_X86_64_32            0000000000000000 .rodata + 7
0000000000000028  0000000f00000002 R_X86_64_PC32          0000000000000000 printf - 4
000000000000002e  0000000d00000002 R_X86_64_PC32          0000000000000004 extbssvalue - 4
0000000000000035  000000070000000a R_X86_64_32            0000000000000000 .rodata + 20
000000000000003f  0000000f00000002 R_X86_64_PC32          0000000000000000 printf - 4
0000000000000045  0000000300000002 R_X86_64_PC32          0000000000000000 .data + 0
000000000000004c  000000070000000a R_X86_64_32            0000000000000000 .rodata + 39
0000000000000056  0000000f00000002 R_X86_64_PC32          0000000000000000 printf - 4
000000000000005c  0000000400000002 R_X86_64_PC32          0000000000000000 .bss - 4
0000000000000063  000000070000000a R_X86_64_32            0000000000000000 .rodata + 52
000000000000006d  0000000f00000002 R_X86_64_PC32          0000000000000000 printf - 4
0000000000000073  0000000c00000002 R_X86_64_PC32          0000000000000000 extvalue - 4
000000000000007e  0000000d00000002 R_X86_64_PC32          0000000000000004 extbssvalue - 4
0000000000000086  0000000300000002 R_X86_64_PC32          0000000000000000 .data + 0
000000000000008e  0000000400000002 R_X86_64_PC32          0000000000000000 .bss - 4
00000000000000a2  000000070000000a R_X86_64_32            0000000000000000 .rodata + 6b
00000000000000a7  0000000e00000002 R_X86_64_PC32          0000000000000000 puts - 4

Relocation section '.rela.eh_frame' at offset 0x5b8 contains 2 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000000020  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 0
0000000000000040  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 96

The decoding of unwind sections for machine type Advanced Micro Devices X86-64 is not currently supported.

Symbol table '.symtab' contains 17 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS sample.c
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    3 
     4: 0000000000000000     0 SECTION LOCAL  DEFAULT    4 
     5: 0000000000000004     4 OBJECT  LOCAL  DEFAULT    3 value
     6: 0000000000000000     4 OBJECT  LOCAL  DEFAULT    4 bssvalue
     7: 0000000000000000     0 SECTION LOCAL  DEFAULT    5 
     8: 0000000000000000   150 FUNC    LOCAL  DEFAULT    1 func
     9: 0000000000000000     0 SECTION LOCAL  DEFAULT    7 
    10: 0000000000000000     0 SECTION LOCAL  DEFAULT    8 
    11: 0000000000000000     0 SECTION LOCAL  DEFAULT    6 
    12: 0000000000000000     4 OBJECT  GLOBAL DEFAULT    3 extvalue
    13: 0000000000000004     4 OBJECT  GLOBAL DEFAULT  COM extbssvalue
    14: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND puts
    15: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND printf
    16: 0000000000000096    39 FUNC    GLOBAL DEFAULT    1 extfunc

No version information found in this file.
% 
