#include <stdlib.h>
#include <string.h>

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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int size;
    unsigned int i;

    size = ft_strlen(s);
    i = 0;
    res = (char *)malloc((size + 1) * sizeof(char));
    if (!res)
        return NULL;
    if (!s || !f)
        return NULL;
    while(i < size)
    {
        res[i] = f(i, s[i]);
        i++;
    }

    res[size] = '\0';

    return res;
}

char uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

/*#include <stdio.h>
int main()
{
    char *str = "hello";
    char *res = ft_strmapi(str, &uppercase);
    printf("%s" ,res);
}*/