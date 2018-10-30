#include <stdio.h>

int main()
{
    int i = 0;

    if(i == 0)
    {
        ++i;
    }
    else
    {
        --i;
    }

    if(i < 0)
    {
        i = 0;
    }

    return 0;
}
