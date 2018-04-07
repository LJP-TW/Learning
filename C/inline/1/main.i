# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "main.c"
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
