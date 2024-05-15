#include <string.h>
char *ft_strchr(const char *s, int c)
{
    while (*s != '\0') {
        if (*s == c) {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0') {
        return (char *)s;
    }
    return NULL;
}
#include <stdio.h>
int main()
{
    char str[5] = "Hello";
    char c = 'l';
    printf("%s", ft_strchr(str, c));
    printf("%s", strchr(str, c));

}