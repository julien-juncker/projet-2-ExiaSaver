#include <stdio.h>
#include <stdlib.h>

int testASCII()
{
    int  i = 0;
    for (i = 128; i < 256; i++)
    {
        printf("%d = %c \n", i , (char)i);
    }
    return 0;
}
