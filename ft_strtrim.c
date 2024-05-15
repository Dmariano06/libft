#include <string.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

char *malloc_dest(const char *s1, const char *set)
{
    int size_s1 = ft_strlen(s1);
    int size_set = ft_strlen(set);
    int count = 0;
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (j < size_set)
        {
            if (s1[i] == set[j])
                count++;
            j++;
        }
        i++;
    }

    char *dest = malloc((sizeof(char) * (size_s1 - count)) + 1);
    if (!dest)
        return NULL;
    return dest;
}

char *ft_strtrim(const char *s1, const char *set)
{
    int size = ft_strlen(set);
    int i = 0, j = 0, k = 0;
    char *dest = malloc_dest(s1, set);

    if (!dest)
        return NULL;

    while (s1[i])
    {
        int count = 0;
        k = 0;
        while (k < size)
        {
            if (s1[i] == set[k])
            {
                count = 1;
                break;
            }
            k++;
        }
        if (!count)
        {
            dest[j] = s1[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
    return dest;
}

#include <stdio.h>
int main()
{
    char str[6] = "Hello";
    char set[3] = "lo";
    char *dest = ft_strtrim(str, set);
    printf("%s", dest);
    free(dest);
    return 0;
}