SECTIONS
{
  . = 0x08048000 + SIZEOF_HEADERS;
  .text   : { stext = .;           *(.text) }
  .rodata : { PROVIDE(srdata = .); *(.rodata) }
  .data   : { PROVIDE(sdata  = .); *(.data) }
  .bss    : { *(.bss)  }

  .rela.plt       :
    {
      *(.rela.plt)
      PROVIDE_HIDDEN (__rela_iplt_start = .);
      *(.rela.iplt)
      PROVIDE_HIDDEN (__rela_iplt_end = .);
    }
  .plt            : { *(.plt) *(.iplt) }

  .eh_frame       : ONLY_IF_RO { KEEP (*(.eh_frame)) *(.eh_frame.*) }

  .init_array     :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT_BY_INIT_PRIORITY(.init_array.*) SORT_BY_INIT_PRIORITY(.ctors.*)))
    KEEP (*(.init_array EXCLUDE_FILE (*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o ) .ctors))
    PROVIDE_HIDDEN (__init_array_end = .);
  }
}
