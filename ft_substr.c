#include <string.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *dest;
    dest = malloc((sizeof(char) * len + 1));
    if (!dest)
        return NULL;

    i = 0;
    while(s[start] != '\0' && i < len )
    {
        dest[i] = s[start];
        start++;
        i++;
    }
    return dest;
}

/*#include <stdio.h>
int main()
{
    char str[5] = "Hello";
    char *dest;
    printf("%s", ft_substr(str, 2, 3));
}*/