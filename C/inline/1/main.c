int x;

void printHi() __attribute__ ((always_inline));

inline void printHi() {
	x--;
}

int main()
{
	x = 1;
	printHi();
	return 0;
}
