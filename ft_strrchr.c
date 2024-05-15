#include <string.h>
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strrchr(const char *s, int c)
{
    const char *res;

    while (*s != '\0') {
        if (*s == c)
            res = s;
        s++;
    }

    if (c == '\0') {
        return (char *)s;
    } else
        return (char *)res;
}
#include <stdio.h>
int main()
{
    char str[5] = "Hello";
    char c = 'o';
    printf("%s", ft_strrchr(str, c));
 //   printf("%s", strrchr(str, c));

}