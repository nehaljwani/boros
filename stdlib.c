//#include "bug.h"
#define bug(x) (void)(x)

void memcpy(void *d, void *s, unsigned int len)
{
	unsigned char *dd = d, *ss = s;
	while(len--)
		*dd++ = *ss++;
}

void memset(void *d, int fill, int len)
{
	unsigned char *cd = d;

	while(len--)
		*cd++ = fill;
}

void memmove(void *s1, const void *s2, int n)
{
	unsigned long *lp1 = s1;
	const unsigned long *lp2 = s2;
	unsigned char *cp1;
	const unsigned char *cp2;

	int eights;
	int remainder;

	if(s1 > s2)
		bug("memmove called in unsupported way.\n");

	remainder = n % 8;
	eights = n/8;

	while(eights)
	{
		*lp1++ = *lp2++;
		eights--;
	}

	cp1 = (unsigned char *)lp1;
	cp2 = (const unsigned char *)lp2;

	while(remainder)
	{
		*cp1++ = *cp2++;
		remainder--;
	}
}
