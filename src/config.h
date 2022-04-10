#ifndef CONFIG_H
#define CONFIG_H

#define KERNEL_CODE_SEG 0x08
#define KERNEL_DATA_SEG 0x10

#define ENKI_SECTOR_SIZE 512

#define ENKI_TOTAL_INTERRUPTS 512

#define ENKI_HEAP_ADDRESS       0x01000000
#define ENKI_HEAP_TABLE_ADDRESS 0x00007E00
#define ENKI_HEAP_SIZE_BYTES    1024*1024*100  // 100 MB
#define ENKI_HEAP_BLOCK_SIZE    4096

#endif