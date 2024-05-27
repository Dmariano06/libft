#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int len1;
    int len2;
    int i;
    int j;

    if (!s1 || !s2)
        return NULL;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    res = malloc((len1 + len2 + 1) * sizeof(char));
    if (!res)
        return NULL;

    i = 0;
    while (i < len1)
    {
        res[i] = s1[i];
        i++;
    }

    j = 0;
    while (j < len2)
    {
        res[i + j] = s2[j];
        j++;
    }

    res[i + j] = '\0';
    return res;
}