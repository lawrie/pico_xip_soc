__heap_size  = 0x200;;      /* required amount of heap  */
__stack_size = 0x400;; /* required amount of stack */

MEMORY
{
    FLASH (rx)      : ORIGIN = 0x00050000, LENGTH = 0x30000 /* entire flash */
    STACK (rw)      : ORIGIN = 0x00000000, LENGTH = 0x000400 /* 1024 bytes for stack (2 BRAMS) */
    RAM (xrw)       : ORIGIN = 0x00000400, LENGTH = 0x001000 /* 3072 bytes heap (6 BRAMS) */
}

SECTIONS {
    /* The program code and other data goes into FLASH */
    .text :
    {
        . = ALIGN(4);
        *(.text)           /* .text sections (code) */
        *(.text*)          /* .text* sections (code) */
        *(.rodata)         /* .rodata sections (constants, strings, etc.) */
        *(.rodata*)        /* .rodata* sections (constants, strings, etc.) */
        *(.srodata)         /* .rodata sections (constants, strings, etc.) */
        *(.srodata*)        /* .rodata* sections (constants, strings, etc.) */
        *(.eh_frame)
        *(.eh_frame*)
        . = ALIGN(4);
        _etext = .;        /* define a global symbol at end of code */
        _sidata = _etext;  /* This is used by the startup in order to initialize the .data secion */
    } >FLASH

    /* This is the initialized data section
    The program executes knowing that the data is in the RAM
    but the loader puts the initial values in the FLASH (inidata).
    It is one task of the startup to copy the initial values from FLASH to RAM. */
    .data : AT ( _sidata )
    {
        . = ALIGN(4);
        _sdata = .;        /* create a global symbol at data start; used by startup code in order to initialise the .data section in RAM */
        _ram_start = .;    /* create a global symbol at ram start for garbage collector */
        *(.data)           /* .data sections */
        *(.data*)          /* .data* sections */
        *(.sdata)           /* .sdata sections */
        *(.sdata*)          /* .sdata* sections */
        *(.init_array)           /* .sdata sections */
        *(.init_array*)          /* .sdata* sections */
        . = ALIGN(4);
        _edata = .;        /* define a global symbol at data end; used by startup code in order to initialise the .data section in RAM */
    } >RAM

    /* Uninitialized data section */
    /*
    .bss : AT( _edata)
    {
        . = ALIGN(4);
        _sbss = .;
        *(.bss)
        *(.bss*)
        *(.sbss)
        *(.sbss*)
        *(COMMON)

        . = ALIGN(4);
        _ebss = . + 0x400;
    } >BSS
    */

    /* this is to define the start of the heap, and make sure we have a minimum size */
    .heap :
    {
        . = ALIGN(4);
        _heap_start = .;    /* define a global symbol at heap start */
    } >RAM
}
