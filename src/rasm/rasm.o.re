% readelf -S -r -s rasm.o
There are 13 section headers, starting at offset 0x4e8:

Section Headers:
  [Nr] Name              Type            Address          Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            0000000000000000 000000 000000 00      0   0  0
  [ 1] .text             PROGBITS        0000000000000000 000040 000055 00  AX  0   0  1
  [ 2] .rela.text        RELA            0000000000000000 000390 0000a8 18   I 11   1  8
  [ 3] .data             PROGBITS        0000000000000000 000098 000008 00  WA  0   0  4
  [ 4] .bss              NOBITS          0000000000000000 0000a0 000008 00  WA  0   0  4
  [ 5] .rodata           PROGBITS        0000000000000000 0000a0 00000e 00   A  0   0  1
  [ 6] .comment          PROGBITS        0000000000000000 0000ae 00002d 01  MS  0   0  1
  [ 7] .note.GNU-stack   PROGBITS        0000000000000000 0000db 000000 00      0   0  1
  [ 8] .eh_frame         PROGBITS        0000000000000000 0000e0 000078 00   A  0   0  8
  [ 9] .rela.eh_frame    RELA            0000000000000000 000438 000048 18   I 11   8  8
  [10] .shstrtab         STRTAB          0000000000000000 000480 000061 00      0   0  1
  [11] .symtab           SYMTAB          0000000000000000 000158 0001e0 18     12  15  8
  [12] .strtab           STRTAB          0000000000000000 000338 000057 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

Relocation section '.rela.text' at offset 0x390 contains 7 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
000000000000000d  0000001000000002 R_X86_64_PC32          0000000000000000 extvalue - 4
0000000000000013  0000001100000002 R_X86_64_PC32          0000000000000000 extbssvalue - 4
000000000000001b  0000000300000002 R_X86_64_PC32          0000000000000000 .data + 0
0000000000000023  0000000400000002 R_X86_64_PC32          0000000000000000 .bss + 0
0000000000000035  0000001300000002 R_X86_64_PC32          0000000000000000 extfunc - 4
0000000000000046  0000000f00000002 R_X86_64_PC32          0000000000000008 string - 8
000000000000004a  0000000b0000000b R_X86_64_32S           0000000000000000 .rodata + 0

Relocation section '.rela.eh_frame' at offset 0x438 contains 3 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000000020  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 0
0000000000000040  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 7
0000000000000060  0000000200000002 R_X86_64_PC32          0000000000000000 .text + 2b

Symbol table '.symtab' contains 20 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS rasm.c
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    3 
     4: 0000000000000000     0 SECTION LOCAL  DEFAULT    4 
     5: 0000000000000000     4 OBJECT  LOCAL  DEFAULT    3 dummy_value
     6: 0000000000000000     4 OBJECT  LOCAL  DEFAULT    4 dummy_bssvalue
     7: 0000000000000004     4 OBJECT  LOCAL  DEFAULT    3 value
     8: 0000000000000004     4 OBJECT  LOCAL  DEFAULT    4 bssvalue
     9: 0000000000000000     7 FUNC    LOCAL  DEFAULT    1 dummy_func
    10: 0000000000000007    36 FUNC    LOCAL  DEFAULT    1 func
    11: 0000000000000000     0 SECTION LOCAL  DEFAULT    5 
    12: 0000000000000000     0 SECTION LOCAL  DEFAULT    7 
    13: 0000000000000000     0 SECTION LOCAL  DEFAULT    8 
    14: 0000000000000000     0 SECTION LOCAL  DEFAULT    6 
    15: 0000000000000008     8 OBJECT  GLOBAL DEFAULT  COM string
    16: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND extvalue
    17: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND extbssvalue
    18: 000000000000002b    42 FUNC    GLOBAL DEFAULT    1 main
    19: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND extfunc
% 
