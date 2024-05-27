#include <string.h>

char *ft_strrchr(const char *s, int c) {
    const char *last = NULL;
    unsigned char uc = (unsigned char) c;

    while (*s != '\0') {
        if (*s == uc) {
            last = s;
        }
        s++;
    }

    if (uc == '\0') {
        return (char *)s;
    }

    return (char *)last;
}

/*#include <stdio.h>
int main()
{
    char str[5] = "Hello";
    char c = 'o';
    printf("%s", ft_strrchr(str, c));
 //   printf("%s", strrchr(str, c));

}*/