#include <stdlib.h>
#include <stdio.h>
#include "Prototypes.h"

int testASCII()
{
    int i =0;
    for(i=0; i<256; i++)
    {
        printf("%d = %c \n", i, (char)i);
    }
    return 0;
}
