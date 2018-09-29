#ifndef MEM_H
#define MEM_H
#include "types.h"
void mem_init(void *);
void mmap(u64 vaddr, u64 paddr, u64 len, u32 flags);
u64  phys_to_virt(u64 paddr);

#define PT_PRESENT 1
#define PT_WR      2

enum PAGE_SIZE {
	PAGE_2M,
	PAGE_4K
};

#endif
