% readelf -S -s rasm2.o
There are 11 section headers, starting at offset 0x2f8:

Section Headers:
  [Nr] Name              Type             Address           Offset
       Size              EntSize          Flags  Link  Info  Align
  [ 0]                   NULL             0000000000000000  00000000
       0000000000000000  0000000000000000           0     0     0
  [ 1] .text             PROGBITS         0000000000000000  00000040
       0000000000000012  0000000000000000  AX       0     0     1
  [ 2] .data             PROGBITS         0000000000000000  00000054
       0000000000000008  0000000000000000  WA       0     0     4
  [ 3] .bss              NOBITS           0000000000000000  0000005c
       0000000000000000  0000000000000000  WA       0     0     1
  [ 4] .comment          PROGBITS         0000000000000000  0000005c
       000000000000002d  0000000000000001  MS       0     0     1
  [ 5] .note.GNU-stack   PROGBITS         0000000000000000  00000089
       0000000000000000  0000000000000000           0     0     1
  [ 6] .eh_frame         PROGBITS         0000000000000000  00000090
       0000000000000058  0000000000000000   A       0     0     8
  [ 7] .rela.eh_frame    RELA             0000000000000000  00000270
       0000000000000030  0000000000000018   I       9     6     8
  [ 8] .shstrtab         STRTAB           0000000000000000  000002a0
       0000000000000054  0000000000000000           0     0     1
  [ 9] .symtab           SYMTAB           0000000000000000  000000e8
       0000000000000150  0000000000000018          10     8     8
  [10] .strtab           STRTAB           0000000000000000  00000238
       0000000000000038  0000000000000000           0     0     1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

Symbol table '.symtab' contains 14 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS rasm2.c
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    2 
     4: 0000000000000000     0 SECTION LOCAL  DEFAULT    3 
     5: 0000000000000000     0 SECTION LOCAL  DEFAULT    5 
     6: 0000000000000000     0 SECTION LOCAL  DEFAULT    6 
     7: 0000000000000000     0 SECTION LOCAL  DEFAULT    4 
     8: 0000000000000000     4 OBJECT  GLOBAL DEFAULT    2 dummy_extvalue
     9: 0000000000000004     4 OBJECT  GLOBAL DEFAULT  COM dummy_extbssvalue
    10: 0000000000000004     4 OBJECT  GLOBAL DEFAULT    2 extvalue
    11: 0000000000000004     4 OBJECT  GLOBAL DEFAULT  COM extbssvalue
    12: 0000000000000000     7 FUNC    GLOBAL DEFAULT    1 dummy_extfunc
    13: 0000000000000007    11 FUNC    GLOBAL DEFAULT    1 extfunc
% 
