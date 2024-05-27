#include <string.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t str_len;
    char *dest;

    if (!s)
        return NULL;

    str_len = ft_strlen(s);
    
    if (start >= str_len)
    {
        dest = malloc(1);
        if (!dest)
            return NULL;
        dest[0] = '\0';
        return dest;
    }

    if (len > str_len - start)
        len = str_len - start;

    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return NULL;

    i = 0;
    while (s[start] != '\0' && i < len)
    {
        dest[i] = s[start];
        start++;
        i++;
    }
    dest[i] = '\0';

    return dest;
}
/*#iint ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
    nclude <stdio.h>
int main()
{
    char str[5] = "Hello";
    char *dest;
    printf("%s", ft_substr(str, 2, 3));
}*/