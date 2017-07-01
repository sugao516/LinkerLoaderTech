% readelf -a libsample.so.1
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x670
  Start of program headers:          64 (bytes into file)
  Start of section headers:          6488 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           56 (bytes)
  Number of program headers:         7
  Size of section headers:           64 (bytes)
  Number of section headers:         30
  Section header string table index: 27

Section Headers:
  [Nr] Name              Type            Address          Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            0000000000000000 000000 000000 00      0   0  0
  [ 1] .note.gnu.build-id NOTE            00000000000001c8 0001c8 000024 00   A  0   0  4
  [ 2] .gnu.hash         GNU_HASH        00000000000001f0 0001f0 000044 00   A  3   0  8
  [ 3] .dynsym           DYNSYM          0000000000000238 000238 000198 18   A  4   2  8
  [ 4] .dynstr           STRTAB          00000000000003d0 0003d0 0000db 00   A  0   0  1
  [ 5] .gnu.version      VERSYM          00000000000004ac 0004ac 000022 02   A  3   0  2
  [ 6] .gnu.version_r    VERNEED         00000000000004d0 0004d0 000020 00   A  4   1  8
  [ 7] .rela.dyn         RELA            00000000000004f0 0004f0 0000f0 18   A  3   0  8
  [ 8] .rela.plt         RELA            00000000000005e0 0005e0 000030 18  AI  3  23  8
  [ 9] .init             PROGBITS        0000000000000610 000610 000017 00  AX  0   0  4
  [10] .plt              PROGBITS        0000000000000630 000630 000030 10  AX  0   0 16
  [11] .plt.got          PROGBITS        0000000000000660 000660 000008 00  AX  0   0  8
  [12] .text             PROGBITS        0000000000000670 000670 0001d5 00  AX  0   0 16
  [13] .fini             PROGBITS        0000000000000848 000848 000009 00  AX  0   0  4
  [14] .rodata           PROGBITS        0000000000000851 000851 000075 00   A  0   0  1
  [15] .eh_frame_hdr     PROGBITS        00000000000008c8 0008c8 000024 00   A  0   0  4
  [16] .eh_frame         PROGBITS        00000000000008f0 0008f0 000084 00   A  0   0  8
  [17] .init_array       INIT_ARRAY      0000000000200dd8 000dd8 000008 00  WA  0   0  8
  [18] .fini_array       FINI_ARRAY      0000000000200de0 000de0 000008 00  WA  0   0  8
  [19] .jcr              PROGBITS        0000000000200de8 000de8 000008 00  WA  0   0  8
  [20] .data.rel.ro      PROGBITS        0000000000200df0 000df0 000008 00  WA  0   0  8
  [21] .dynamic          DYNAMIC         0000000000200df8 000df8 0001d0 10  WA  4   0  8
  [22] .got              PROGBITS        0000000000200fc8 000fc8 000038 08  WA  0   0  8
  [23] .got.plt          PROGBITS        0000000000201000 001000 000028 08  WA  0   0  8
  [24] .data             PROGBITS        0000000000201028 001028 000008 00  WA  0   0  4
  [25] .bss              NOBITS          0000000000201030 001030 000010 00  WA  0   0  4
  [26] .comment          PROGBITS        0000000000000000 001030 00002c 01  MS  0   0  1
  [27] .shstrtab         STRTAB          0000000000000000 00184f 000103 00      0   0  1
  [28] .symtab           SYMTAB          0000000000000000 001060 000600 18     29  49  8
  [29] .strtab           STRTAB          0000000000000000 001660 0001ef 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr           PhysAddr           FileSiz  MemSiz   Flg Align
  LOAD           0x000000 0x0000000000000000 0x0000000000000000 0x000974 0x000974 R E 0x200000
  LOAD           0x000dd8 0x0000000000200dd8 0x0000000000200dd8 0x000258 0x000268 RW  0x200000
  DYNAMIC        0x000df8 0x0000000000200df8 0x0000000000200df8 0x0001d0 0x0001d0 RW  0x8
  NOTE           0x0001c8 0x00000000000001c8 0x00000000000001c8 0x000024 0x000024 R   0x4
  GNU_EH_FRAME   0x0008c8 0x00000000000008c8 0x00000000000008c8 0x000024 0x000024 R   0x4
  GNU_STACK      0x000000 0x0000000000000000 0x0000000000000000 0x000000 0x000000 RW  0x10
  GNU_RELRO      0x000dd8 0x0000000000200dd8 0x0000000000200dd8 0x000228 0x000228 R   0x1

 Section to Segment mapping:
  Segment Sections...
   00     .note.gnu.build-id .gnu.hash .dynsym .dynstr .gnu.version .gnu.version_r .rela.dyn .rela.plt .init .plt .plt.got .text .fini .rodata .eh_frame_hdr .eh_frame 
   01     .init_array .fini_array .jcr .data.rel.ro .dynamic .got .got.plt .data .bss 
   02     .dynamic 
   03     .note.gnu.build-id 
   04     .eh_frame_hdr 
   05     
   06     .init_array .fini_array .jcr .data.rel.ro .dynamic .got 

Dynamic section at offset 0xdf8 contains 25 entries:
  Tag        Type                         Name/Value
 0x0000000000000001 (NEEDED)             Shared library: [libc.so.6]
 0x000000000000000e (SONAME)             Library soname: [libsample.so.1]
 0x000000000000000c (INIT)               0x610
 0x000000000000000d (FINI)               0x848
 0x0000000000000019 (INIT_ARRAY)         0x200dd8
 0x000000000000001b (INIT_ARRAYSZ)       8 (bytes)
 0x000000000000001a (FINI_ARRAY)         0x200de0
 0x000000000000001c (FINI_ARRAYSZ)       8 (bytes)
 0x000000006ffffef5 (GNU_HASH)           0x1f0
 0x0000000000000005 (STRTAB)             0x3d0
 0x0000000000000006 (SYMTAB)             0x238
 0x000000000000000a (STRSZ)              219 (bytes)
 0x000000000000000b (SYMENT)             24 (bytes)
 0x0000000000000003 (PLTGOT)             0x201000
 0x0000000000000002 (PLTRELSZ)           48 (bytes)
 0x0000000000000014 (PLTREL)             RELA
 0x0000000000000017 (JMPREL)             0x5e0
 0x0000000000000007 (RELA)               0x4f0
 0x0000000000000008 (RELASZ)             240 (bytes)
 0x0000000000000009 (RELAENT)            24 (bytes)
 0x000000006ffffffe (VERNEED)            0x4d0
 0x000000006fffffff (VERNEEDNUM)         1
 0x000000006ffffff0 (VERSYM)             0x4ac
 0x000000006ffffff9 (RELACOUNT)          3
 0x0000000000000000 (NULL)               0x0

Relocation section '.rela.dyn' at offset 0x4f0 contains 10 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000200dd8  0000000000000008 R_X86_64_RELATIVE                         740
0000000000200de0  0000000000000008 R_X86_64_RELATIVE                         700
0000000000200df0  0000000000000008 R_X86_64_RELATIVE                         200df0
0000000000200fc8  0000000200000006 R_X86_64_GLOB_DAT      0000000000000000 _ITM_deregisterTMCloneTable + 0
0000000000200fd0  0000000500000006 R_X86_64_GLOB_DAT      0000000000000000 __gmon_start__ + 0
0000000000200fd8  0000001000000006 R_X86_64_GLOB_DAT      0000000000201038 extbssvalue + 0
0000000000200fe0  0000000600000006 R_X86_64_GLOB_DAT      0000000000000000 _Jv_RegisterClasses + 0
0000000000200fe8  0000000d00000006 R_X86_64_GLOB_DAT      0000000000201028 extvalue + 0
0000000000200ff0  0000000700000006 R_X86_64_GLOB_DAT      0000000000000000 _ITM_registerTMCloneTable + 0
0000000000200ff8  0000000800000006 R_X86_64_GLOB_DAT      0000000000000000 __cxa_finalize@GLIBC_2.2.5 + 0

Relocation section '.rela.plt' at offset 0x5e0 contains 2 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000201018  0000000300000007 R_X86_64_JUMP_SLOT     0000000000000000 puts@GLIBC_2.2.5 + 0
0000000000201020  0000000400000007 R_X86_64_JUMP_SLOT     0000000000000000 printf@GLIBC_2.2.5 + 0

The decoding of unwind sections for machine type Advanced Micro Devices X86-64 is not currently supported.

Symbol table '.dynsym' contains 17 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000610     0 SECTION LOCAL  DEFAULT    9 
     2: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_deregisterTMCloneTable
     3: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND puts@GLIBC_2.2.5 (2)
     4: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND printf@GLIBC_2.2.5 (2)
     5: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND __gmon_start__
     6: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _Jv_RegisterClasses
     7: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_registerTMCloneTable
     8: 0000000000000000     0 FUNC    WEAK   DEFAULT  UND __cxa_finalize@GLIBC_2.2.5 (2)
     9: 0000000000201030     0 NOTYPE  GLOBAL DEFAULT   24 _edata
    10: 0000000000201040     0 NOTYPE  GLOBAL DEFAULT   25 _end
    11: 000000000000081c    41 FUNC    GLOBAL DEFAULT   12 extfunc
    12: 0000000000201030     0 NOTYPE  GLOBAL DEFAULT   25 __bss_start
    13: 0000000000201028     4 OBJECT  GLOBAL DEFAULT   24 extvalue
    14: 0000000000000610     0 FUNC    GLOBAL DEFAULT    9 _init
    15: 0000000000000848     0 FUNC    GLOBAL DEFAULT   13 _fini
    16: 0000000000201038     4 OBJECT  GLOBAL DEFAULT   25 extbssvalue

Symbol table '.symtab' contains 64 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00000000000001c8     0 SECTION LOCAL  DEFAULT    1 
     2: 00000000000001f0     0 SECTION LOCAL  DEFAULT    2 
     3: 0000000000000238     0 SECTION LOCAL  DEFAULT    3 
     4: 00000000000003d0     0 SECTION LOCAL  DEFAULT    4 
     5: 00000000000004ac     0 SECTION LOCAL  DEFAULT    5 
     6: 00000000000004d0     0 SECTION LOCAL  DEFAULT    6 
     7: 00000000000004f0     0 SECTION LOCAL  DEFAULT    7 
     8: 00000000000005e0     0 SECTION LOCAL  DEFAULT    8 
     9: 0000000000000610     0 SECTION LOCAL  DEFAULT    9 
    10: 0000000000000630     0 SECTION LOCAL  DEFAULT   10 
    11: 0000000000000660     0 SECTION LOCAL  DEFAULT   11 
    12: 0000000000000670     0 SECTION LOCAL  DEFAULT   12 
    13: 0000000000000848     0 SECTION LOCAL  DEFAULT   13 
    14: 0000000000000851     0 SECTION LOCAL  DEFAULT   14 
    15: 00000000000008c8     0 SECTION LOCAL  DEFAULT   15 
    16: 00000000000008f0     0 SECTION LOCAL  DEFAULT   16 
    17: 0000000000200dd8     0 SECTION LOCAL  DEFAULT   17 
    18: 0000000000200de0     0 SECTION LOCAL  DEFAULT   18 
    19: 0000000000200de8     0 SECTION LOCAL  DEFAULT   19 
    20: 0000000000200df0     0 SECTION LOCAL  DEFAULT   20 
    21: 0000000000200df8     0 SECTION LOCAL  DEFAULT   21 
    22: 0000000000200fc8     0 SECTION LOCAL  DEFAULT   22 
    23: 0000000000201000     0 SECTION LOCAL  DEFAULT   23 
    24: 0000000000201028     0 SECTION LOCAL  DEFAULT   24 
    25: 0000000000201030     0 SECTION LOCAL  DEFAULT   25 
    26: 0000000000000000     0 SECTION LOCAL  DEFAULT   26 
    27: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS crtstuff.c
    28: 0000000000200de8     0 OBJECT  LOCAL  DEFAULT   19 __JCR_LIST__
    29: 0000000000000670     0 FUNC    LOCAL  DEFAULT   12 deregister_tm_clones
    30: 00000000000006b0     0 FUNC    LOCAL  DEFAULT   12 register_tm_clones
    31: 0000000000000700     0 FUNC    LOCAL  DEFAULT   12 __do_global_dtors_aux
    32: 0000000000201030     1 OBJECT  LOCAL  DEFAULT   25 completed.6917
    33: 0000000000200de0     0 OBJECT  LOCAL  DEFAULT   18 __do_global_dtors_aux_fini_array_entry
    34: 0000000000000740     0 FUNC    LOCAL  DEFAULT   12 frame_dummy
    35: 0000000000200dd8     0 OBJECT  LOCAL  DEFAULT   17 __frame_dummy_init_array_entry
    36: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS sample.c
    37: 000000000020102c     4 OBJECT  LOCAL  DEFAULT   24 value
    38: 0000000000201034     4 OBJECT  LOCAL  DEFAULT   25 bssvalue
    39: 0000000000000770   172 FUNC    LOCAL  DEFAULT   12 func
    40: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS crtstuff.c
    41: 0000000000000970     0 OBJECT  LOCAL  DEFAULT   16 __FRAME_END__
    42: 0000000000200de8     0 OBJECT  LOCAL  DEFAULT   19 __JCR_END__
    43: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS 
    44: 0000000000200df0     0 OBJECT  LOCAL  DEFAULT   20 __dso_handle
    45: 0000000000200df8     0 OBJECT  LOCAL  DEFAULT   21 _DYNAMIC
    46: 00000000000008c8     0 NOTYPE  LOCAL  DEFAULT   15 __GNU_EH_FRAME_HDR
    47: 0000000000201030     0 OBJECT  LOCAL  DEFAULT   24 __TMC_END__
    48: 0000000000201000     0 OBJECT  LOCAL  DEFAULT   23 _GLOBAL_OFFSET_TABLE_
    49: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_deregisterTMCloneTable
    50: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND puts@@GLIBC_2.2.5
    51: 0000000000201030     0 NOTYPE  GLOBAL DEFAULT   24 _edata
    52: 0000000000000848     0 FUNC    GLOBAL DEFAULT   13 _fini
    53: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND printf@@GLIBC_2.2.5
    54: 000000000000081c    41 FUNC    GLOBAL DEFAULT   12 extfunc
    55: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND __gmon_start__
    56: 0000000000201040     0 NOTYPE  GLOBAL DEFAULT   25 _end
    57: 0000000000201030     0 NOTYPE  GLOBAL DEFAULT   25 __bss_start
    58: 0000000000201038     4 OBJECT  GLOBAL DEFAULT   25 extbssvalue
    59: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _Jv_RegisterClasses
    60: 0000000000201028     4 OBJECT  GLOBAL DEFAULT   24 extvalue
    61: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_registerTMCloneTable
    62: 0000000000000000     0 FUNC    WEAK   DEFAULT  UND __cxa_finalize@@GLIBC_2.2.5
    63: 0000000000000610     0 FUNC    GLOBAL DEFAULT    9 _init

Histogram for `.gnu.hash' bucket list length (total of 3 buckets):
 Length  Number     % of total  Coverage
      0  0          (  0.0%)
      1  0          (  0.0%)      0.0%
      2  2          ( 66.7%)     50.0%
      3  0          (  0.0%)     50.0%
      4  1          ( 33.3%)    100.0%

Version symbols section '.gnu.version' contains 17 entries:
 Addr: 00000000000004ac  Offset: 0x0004ac  Link: 3 (.dynsym)
  000:   0 (*local*)       0 (*local*)       0 (*local*)       2 (GLIBC_2.2.5)
  004:   2 (GLIBC_2.2.5)   0 (*local*)       0 (*local*)       0 (*local*)    
  008:   2 (GLIBC_2.2.5)   1 (*global*)      1 (*global*)      1 (*global*)   
  00c:   1 (*global*)      1 (*global*)      1 (*global*)      1 (*global*)   
  010:   1 (*global*)   

Version needs section '.gnu.version_r' contains 1 entries:
 Addr: 0x00000000000004d0  Offset: 0x0004d0  Link: 4 (.dynstr)
  000000: Version: 1  File: libc.so.6  Cnt: 1
  0x0010:   Name: GLIBC_2.2.5  Flags: none  Version: 2

Displaying notes found at file offset 0x000001c8 with length 0x00000024:
  Owner                 Data size	Description
  GNU                  0x00000014	NT_GNU_BUILD_ID (unique build ID bitstring)
    Build ID: c96514f2c27e1c5dff21509d6565e81ba58c46a6
% 
