% readelf -a sample_shared
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              EXEC (Executable file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x4006c0
  Start of program headers:          64 (bytes into file)
  Start of section headers:          6768 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           56 (bytes)
  Number of program headers:         9
  Size of section headers:           64 (bytes)
  Number of section headers:         30
  Section header string table index: 27

Section Headers:
  [Nr] Name              Type            Address          Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            0000000000000000 000000 000000 00      0   0  0
  [ 1] .interp           PROGBITS        0000000000400238 000238 00001c 00   A  0   0  1
  [ 2] .note.ABI-tag     NOTE            0000000000400254 000254 000020 00   A  0   0  4
  [ 3] .note.gnu.build-id NOTE            0000000000400274 000274 000024 00   A  0   0  4
  [ 4] .gnu.hash         GNU_HASH        0000000000400298 000298 000040 00   A  5   0  8
  [ 5] .dynsym           DYNSYM          00000000004002d8 0002d8 000198 18   A  6   1  8
  [ 6] .dynstr           STRTAB          0000000000400470 000470 0000e5 00   A  0   0  1
  [ 7] .gnu.version      VERSYM          0000000000400556 000556 000022 02   A  5   0  2
  [ 8] .gnu.version_r    VERNEED         0000000000400578 000578 000020 00   A  6   1  8
  [ 9] .rela.dyn         RELA            0000000000400598 000598 000060 18   A  5   0  8
  [10] .rela.plt         RELA            00000000004005f8 0005f8 000060 18  AI  5  23  8
  [11] .init             PROGBITS        0000000000400658 000658 000017 00  AX  0   0  4
  [12] .plt              PROGBITS        0000000000400670 000670 000050 10  AX  0   0 16
  [13] .text             PROGBITS        00000000004006c0 0006c0 0001e2 00  AX  0   0 16
  [14] .fini             PROGBITS        00000000004008a4 0008a4 000009 00  AX  0   0  4
  [15] .rodata           PROGBITS        00000000004008b0 0008b0 000062 00   A  0   0  8
  [16] .eh_frame_hdr     PROGBITS        0000000000400914 000914 000034 00   A  0   0  4
  [17] .eh_frame         PROGBITS        0000000000400948 000948 0000f4 00   A  0   0  8
  [18] .init_array       INIT_ARRAY      0000000000600de8 000de8 000008 00  WA  0   0  8
  [19] .fini_array       FINI_ARRAY      0000000000600df0 000df0 000008 00  WA  0   0  8
  [20] .jcr              PROGBITS        0000000000600df8 000df8 000008 00  WA  0   0  8
  [21] .dynamic          DYNAMIC         0000000000600e00 000e00 0001f0 10  WA  6   0  8
  [22] .got              PROGBITS        0000000000600ff0 000ff0 000010 08  WA  0   0  8
  [23] .got.plt          PROGBITS        0000000000601000 001000 000038 08  WA  0   0  8
  [24] .data             PROGBITS        0000000000601038 001038 000004 00  WA  0   0  1
  [25] .bss              NOBITS          000000000060103c 00103c 00000c 00  WA  0   0  4
  [26] .comment          PROGBITS        0000000000000000 00103c 00002c 01  MS  0   0  1
  [27] .shstrtab         STRTAB          0000000000000000 001966 000108 00      0   0  1
  [28] .symtab           SYMTAB          0000000000000000 001068 0006a8 18     29  46  8
  [29] .strtab           STRTAB          0000000000000000 001710 000256 00      0   0  1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), l (large)
  I (info), L (link order), G (group), T (TLS), E (exclude), x (unknown)
  O (extra OS processing required) o (OS specific), p (processor specific)

There are no section groups in this file.

Program Headers:
  Type           Offset   VirtAddr           PhysAddr           FileSiz  MemSiz   Flg Align
  PHDR           0x000040 0x0000000000400040 0x0000000000400040 0x0001f8 0x0001f8 R E 0x8
  INTERP         0x000238 0x0000000000400238 0x0000000000400238 0x00001c 0x00001c R   0x1
      [Requesting program interpreter: /lib64/ld-linux-x86-64.so.2]
  LOAD           0x000000 0x0000000000400000 0x0000000000400000 0x000a3c 0x000a3c R E 0x200000
  LOAD           0x000de8 0x0000000000600de8 0x0000000000600de8 0x000254 0x000260 RW  0x200000
  DYNAMIC        0x000e00 0x0000000000600e00 0x0000000000600e00 0x0001f0 0x0001f0 RW  0x8
  NOTE           0x000254 0x0000000000400254 0x0000000000400254 0x000044 0x000044 R   0x4
  GNU_EH_FRAME   0x000914 0x0000000000400914 0x0000000000400914 0x000034 0x000034 R   0x4
  GNU_STACK      0x000000 0x0000000000000000 0x0000000000000000 0x000000 0x000000 RW  0x10
  GNU_RELRO      0x000de8 0x0000000000600de8 0x0000000000600de8 0x000218 0x000218 R   0x1

 Section to Segment mapping:
  Segment Sections...
   00     
   01     .interp 
   02     .interp .note.ABI-tag .note.gnu.build-id .gnu.hash .dynsym .dynstr .gnu.version .gnu.version_r .rela.dyn .rela.plt .init .plt .text .fini .rodata .eh_frame_hdr .eh_frame 
   03     .init_array .fini_array .jcr .dynamic .got .got.plt .data .bss 
   04     .dynamic 
   05     .note.ABI-tag .note.gnu.build-id 
   06     .eh_frame_hdr 
   07     
   08     .init_array .fini_array .jcr .dynamic .got 

Dynamic section at offset 0xe00 contains 26 entries:
  Tag        Type                         Name/Value
 0x0000000000000001 (NEEDED)             Shared library: [libsample.so.1]
 0x0000000000000001 (NEEDED)             Shared library: [libc.so.6]
 0x000000000000000f (RPATH)              Library rpath: [.]
 0x000000000000000c (INIT)               0x400658
 0x000000000000000d (FINI)               0x4008a4
 0x0000000000000019 (INIT_ARRAY)         0x600de8
 0x000000000000001b (INIT_ARRAYSZ)       8 (bytes)
 0x000000000000001a (FINI_ARRAY)         0x600df0
 0x000000000000001c (FINI_ARRAYSZ)       8 (bytes)
 0x000000006ffffef5 (GNU_HASH)           0x400298
 0x0000000000000005 (STRTAB)             0x400470
 0x0000000000000006 (SYMTAB)             0x4002d8
 0x000000000000000a (STRSZ)              229 (bytes)
 0x000000000000000b (SYMENT)             24 (bytes)
 0x0000000000000015 (DEBUG)              0x0
 0x0000000000000003 (PLTGOT)             0x601000
 0x0000000000000002 (PLTRELSZ)           96 (bytes)
 0x0000000000000014 (PLTREL)             RELA
 0x0000000000000017 (JMPREL)             0x4005f8
 0x0000000000000007 (RELA)               0x400598
 0x0000000000000008 (RELASZ)             96 (bytes)
 0x0000000000000009 (RELAENT)            24 (bytes)
 0x000000006ffffffe (VERNEED)            0x400578
 0x000000006fffffff (VERNEEDNUM)         1
 0x000000006ffffff0 (VERSYM)             0x400556
 0x0000000000000000 (NULL)               0x0

Relocation section '.rela.dyn' at offset 0x598 contains 4 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000600ff0  0000000400000006 R_X86_64_GLOB_DAT      0000000000000000 __libc_start_main@GLIBC_2.2.5 + 0
0000000000600ff8  0000000600000006 R_X86_64_GLOB_DAT      0000000000000000 __gmon_start__ + 0
000000000060103c  0000001000000005 R_X86_64_COPY          000000000060103c extbssvalue + 0
0000000000601040  0000000d00000005 R_X86_64_COPY          0000000000601040 extvalue + 0

Relocation section '.rela.plt' at offset 0x5f8 contains 4 entries:
    Offset             Info             Type               Symbol's Value  Symbol's Name + Addend
0000000000601018  0000000200000007 R_X86_64_JUMP_SLOT     0000000000000000 puts@GLIBC_2.2.5 + 0
0000000000601020  0000000300000007 R_X86_64_JUMP_SLOT     0000000000000000 printf@GLIBC_2.2.5 + 0
0000000000601028  0000000500000007 R_X86_64_JUMP_SLOT     0000000000000000 extfunc + 0
0000000000601030  0000000800000007 R_X86_64_JUMP_SLOT     0000000000000000 exit@GLIBC_2.2.5 + 0

The decoding of unwind sections for machine type Advanced Micro Devices X86-64 is not currently supported.

Symbol table '.dynsym' contains 17 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_deregisterTMCloneTable
     2: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND puts@GLIBC_2.2.5 (2)
     3: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND printf@GLIBC_2.2.5 (2)
     4: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND __libc_start_main@GLIBC_2.2.5 (2)
     5: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND extfunc
     6: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND __gmon_start__
     7: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _Jv_RegisterClasses
     8: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND exit@GLIBC_2.2.5 (2)
     9: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_registerTMCloneTable
    10: 000000000060103c     0 NOTYPE  GLOBAL DEFAULT   24 _edata
    11: 0000000000601048     0 NOTYPE  GLOBAL DEFAULT   25 _end
    12: 000000000060103c     0 NOTYPE  GLOBAL DEFAULT   25 __bss_start
    13: 0000000000601040     4 OBJECT  GLOBAL DEFAULT   25 extvalue
    14: 0000000000400658     0 FUNC    GLOBAL DEFAULT   11 _init
    15: 00000000004008a4     0 FUNC    GLOBAL DEFAULT   14 _fini
    16: 000000000060103c     4 OBJECT  GLOBAL DEFAULT   25 extbssvalue

Symbol table '.symtab' contains 71 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000400238     0 SECTION LOCAL  DEFAULT    1 
     2: 0000000000400254     0 SECTION LOCAL  DEFAULT    2 
     3: 0000000000400274     0 SECTION LOCAL  DEFAULT    3 
     4: 0000000000400298     0 SECTION LOCAL  DEFAULT    4 
     5: 00000000004002d8     0 SECTION LOCAL  DEFAULT    5 
     6: 0000000000400470     0 SECTION LOCAL  DEFAULT    6 
     7: 0000000000400556     0 SECTION LOCAL  DEFAULT    7 
     8: 0000000000400578     0 SECTION LOCAL  DEFAULT    8 
     9: 0000000000400598     0 SECTION LOCAL  DEFAULT    9 
    10: 00000000004005f8     0 SECTION LOCAL  DEFAULT   10 
    11: 0000000000400658     0 SECTION LOCAL  DEFAULT   11 
    12: 0000000000400670     0 SECTION LOCAL  DEFAULT   12 
    13: 00000000004006c0     0 SECTION LOCAL  DEFAULT   13 
    14: 00000000004008a4     0 SECTION LOCAL  DEFAULT   14 
    15: 00000000004008b0     0 SECTION LOCAL  DEFAULT   15 
    16: 0000000000400914     0 SECTION LOCAL  DEFAULT   16 
    17: 0000000000400948     0 SECTION LOCAL  DEFAULT   17 
    18: 0000000000600de8     0 SECTION LOCAL  DEFAULT   18 
    19: 0000000000600df0     0 SECTION LOCAL  DEFAULT   19 
    20: 0000000000600df8     0 SECTION LOCAL  DEFAULT   20 
    21: 0000000000600e00     0 SECTION LOCAL  DEFAULT   21 
    22: 0000000000600ff0     0 SECTION LOCAL  DEFAULT   22 
    23: 0000000000601000     0 SECTION LOCAL  DEFAULT   23 
    24: 0000000000601038     0 SECTION LOCAL  DEFAULT   24 
    25: 000000000060103c     0 SECTION LOCAL  DEFAULT   25 
    26: 0000000000000000     0 SECTION LOCAL  DEFAULT   26 
    27: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS crtstuff.c
    28: 0000000000600df8     0 OBJECT  LOCAL  DEFAULT   20 __JCR_LIST__
    29: 00000000004006f0     0 FUNC    LOCAL  DEFAULT   13 deregister_tm_clones
    30: 0000000000400730     0 FUNC    LOCAL  DEFAULT   13 register_tm_clones
    31: 0000000000400770     0 FUNC    LOCAL  DEFAULT   13 __do_global_dtors_aux
    32: 0000000000601044     1 OBJECT  LOCAL  DEFAULT   25 completed.6917
    33: 0000000000600df0     0 OBJECT  LOCAL  DEFAULT   19 __do_global_dtors_aux_fini_array_entry
    34: 0000000000400790     0 FUNC    LOCAL  DEFAULT   13 frame_dummy
    35: 0000000000600de8     0 OBJECT  LOCAL  DEFAULT   18 __frame_dummy_init_array_entry
    36: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS main.c
    37: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS crtstuff.c
    38: 0000000000400a38     0 OBJECT  LOCAL  DEFAULT   17 __FRAME_END__
    39: 0000000000600df8     0 OBJECT  LOCAL  DEFAULT   20 __JCR_END__
    40: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS 
    41: 0000000000600df0     0 NOTYPE  LOCAL  DEFAULT   18 __init_array_end
    42: 0000000000600e00     0 OBJECT  LOCAL  DEFAULT   21 _DYNAMIC
    43: 0000000000600de8     0 NOTYPE  LOCAL  DEFAULT   18 __init_array_start
    44: 0000000000400914     0 NOTYPE  LOCAL  DEFAULT   16 __GNU_EH_FRAME_HDR
    45: 0000000000601000     0 OBJECT  LOCAL  DEFAULT   23 _GLOBAL_OFFSET_TABLE_
    46: 00000000004008a0     2 FUNC    GLOBAL DEFAULT   13 __libc_csu_fini
    47: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_deregisterTMCloneTable
    48: 0000000000601038     0 NOTYPE  WEAK   DEFAULT   24 data_start
    49: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND puts@@GLIBC_2.2.5
    50: 000000000060103c     0 NOTYPE  GLOBAL DEFAULT   24 _edata
    51: 00000000004008a4     0 FUNC    GLOBAL DEFAULT   14 _fini
    52: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND printf@@GLIBC_2.2.5
    53: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND __libc_start_main@@GLIBC_2.2.5
    54: 0000000000601038     0 NOTYPE  GLOBAL DEFAULT   24 __data_start
    55: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND extfunc
    56: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND __gmon_start__
    57: 00000000004008b8     0 OBJECT  GLOBAL HIDDEN    15 __dso_handle
    58: 00000000004008b0     4 OBJECT  GLOBAL DEFAULT   15 _IO_stdin_used
    59: 0000000000400830   101 FUNC    GLOBAL DEFAULT   13 __libc_csu_init
    60: 0000000000601048     0 NOTYPE  GLOBAL DEFAULT   25 _end
    61: 00000000004006c0    43 FUNC    GLOBAL DEFAULT   13 _start
    62: 000000000060103c     0 NOTYPE  GLOBAL DEFAULT   25 __bss_start
    63: 00000000004007b6   107 FUNC    GLOBAL DEFAULT   13 main
    64: 000000000060103c     4 OBJECT  GLOBAL DEFAULT   25 extbssvalue
    65: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _Jv_RegisterClasses
    66: 0000000000601040     4 OBJECT  GLOBAL DEFAULT   25 extvalue
    67: 0000000000000000     0 FUNC    GLOBAL DEFAULT  UND exit@@GLIBC_2.2.5
    68: 0000000000601040     0 OBJECT  GLOBAL HIDDEN    24 __TMC_END__
    69: 0000000000000000     0 NOTYPE  WEAK   DEFAULT  UND _ITM_registerTMCloneTable
    70: 0000000000400658     0 FUNC    GLOBAL DEFAULT   11 _init

Histogram for `.gnu.hash' bucket list length (total of 3 buckets):
 Length  Number     % of total  Coverage
      0  0          (  0.0%)
      1  0          (  0.0%)      0.0%
      2  2          ( 66.7%)     57.1%
      3  1          ( 33.3%)    100.0%

Version symbols section '.gnu.version' contains 17 entries:
 Addr: 0000000000400556  Offset: 0x000556  Link: 5 (.dynsym)
  000:   0 (*local*)       0 (*local*)       2 (GLIBC_2.2.5)   2 (GLIBC_2.2.5)
  004:   2 (GLIBC_2.2.5)   0 (*local*)       0 (*local*)       0 (*local*)    
  008:   2 (GLIBC_2.2.5)   0 (*local*)       1 (*global*)      1 (*global*)   
  00c:   1 (*global*)      0 (*local*)       1 (*global*)      1 (*global*)   
  010:   0 (*local*)    

Version needs section '.gnu.version_r' contains 1 entries:
 Addr: 0x0000000000400578  Offset: 0x000578  Link: 6 (.dynstr)
  000000: Version: 1  File: libc.so.6  Cnt: 1
  0x0010:   Name: GLIBC_2.2.5  Flags: none  Version: 2

Displaying notes found at file offset 0x00000254 with length 0x00000020:
  Owner                 Data size	Description
  GNU                  0x00000010	NT_GNU_ABI_TAG (ABI version tag)
    OS: Linux, ABI: 2.6.32

Displaying notes found at file offset 0x00000274 with length 0x00000024:
  Owner                 Data size	Description
  GNU                  0x00000014	NT_GNU_BUILD_ID (unique build ID bitstring)
    Build ID: 19a9481af398cbd4abfe16cb4894eef4be3c56e7
% 
