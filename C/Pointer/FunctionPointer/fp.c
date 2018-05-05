void fun(int a)
{
}

char *fun2(int a)
{
    static char c = 'a';
    return &c;
}

int **fun3(int a)
{
    static int b = 0x87;
    static int *bp = &b;
    return &bp;
}

int main()
{
    void (*funPtr)(int) = &fun;
    char *(*fun2Pt2)(int) = &fun2;
    int **(*fun3Pt2)(int) = &fun3;

    int a = **(*fun3Pt2)(5);

    return 0;
}
