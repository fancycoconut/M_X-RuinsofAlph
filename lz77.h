// UnCompress LZ77 Data to WRAM
inline void LZ77UnCompWRAM(u32 source, u32 dest) {
asm("mov r0, %0\n"
"mov r1, %1\n"
"swi 0x11\n"
:
:"r" (source), "r" (dest)
:"r0", "r1" );
}

// UnCompress LZ77 Data to VRAM
inline void LZ77UnCompVRAM(u32 source, u32 dest) {
asm("mov r0, %0\n"
"mov r1, %1\n"
"swi 0x12\n"
:
:"r" (source), "r" (dest)
:"r0", "r1" );
}