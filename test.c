#include "bswap.h"
#include <stdio.h>

int main() {
	unsigned short u16 = 0x1234;
	unsigned int u32 = 0x12345678;
	unsigned long long u64 = 0x123456789abcdefL;

	printf("%04x -> %04x\n", u16, bswap_16(u16));
	printf("%08x -> %08x\n", u32, bswap_32(u32));
	printf("%016llx -> %016llx\n", u64, bswap_64(u64));

	return 0;
}
