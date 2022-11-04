#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *heapMemory = malloc(100);
    if (NULL == heapMemory)
    {
        perror("malloc failed bruh");
    }
    return 0;
}
