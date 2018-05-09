#include <malloc.h>

char* fun1()
{
    static char a[5];
    return a;
}

char* fun2()
{
    static char a[5][5];
    return a; // Error : incompatible types returning 'char[5][5]' from a function with result type 'char *'
}

char* fun22()
{
    static int a[5];
    return a; // Error : incompatible types returning 'int[5]' from a function with result type 'char *'
}

char (*fun3())[5]
{
    static char a[5][5];
    return a;
}

struct FiveChar
{
    char c[5];
};

typedef struct FiveChar BigChar;

BigChar* fun4()
{
    static BigChar a[5];
    return a;
}

struct PointerS
{
    int *p;
};

typedef struct PointerS Pointer;

Pointer* fun5()
{
    static Pointer a[5];
    return a;
}

void fun6(char p)
{
    p = 'a';
}

void fun7(char* p, int size)
{
    for(int i = 0; i < size; ++i)
        p[i] = 'a';
}

void fun8(char p[], int size)
{
    // same as fun7
}

void fun9(char p[][2], int h)
{
}

void fun10(char (*p)[2], int h)
{
    // same as fun9
}

void fun11(char** p)
{
}

char (*fun12())[5][5]
{
    static char a[5][5][5];
    return a;
}

typedef struct 
{
    char c[5][5];
} BigBigChar;

BigBigChar* fun13()
{
    static BigBigChar a[5];
    return a;
}

int main()
{
    char c9[2][2] = {{'0'}};
    char c10[2][2] = {{'0'}};
    char** c11 = malloc(sizeof(char *) * 2);
    
    fun9(c9, 2);
    fun10(c10, 2);
    fun11(c11);
}
