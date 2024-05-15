#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *p = s;

    i = 0;
    while(i < n)
    {
        p[i] = c;
        i++;
    }
    return p;
}