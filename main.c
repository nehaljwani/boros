#include "types.h"
#include "mem.h"
#include "print.h"
#include "pci.h"

void kmain(u64 free_page)
{
	mem_init(free_page);

	clear_screen(0);
	printf("Hello from long mode\n");


	pci_init();

	while(1)
		;
}
