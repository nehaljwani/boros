#ifndef E1000_H
#define E1000_H
#include "types.h"
void e1000_init(u8 bus, u8 dev);
void e1000_send(unsigned char *packet, size_t len);
u64  e1000_get_buf(void);
#endif
