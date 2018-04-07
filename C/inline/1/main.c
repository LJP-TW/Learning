#include <stdio.h>

void printHi() __attribute__ ((always_inline));

inline void printHi() {
	printf("Hi\n");
}

int main()
{
	printHi();

	return 0;
}
