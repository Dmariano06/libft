#include <string.h>
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
char *ft_strchr(const char *s, int c)
{
    unsigned char uc = (unsigned char) c;
    while (*s != '\0') {
        if (*s == uc) {
            return (char *)s;
        }
        s++;
    }
    if (uc == '\0')
        return (char *)s;
    return NULL;
}
/*#include <stdio.h>
int main()
{
   	char str[] = "tripouille";
    int c = 'r';
    printf("%s", ft_strchr(str, c));
   // printf("%s", strchr(str, c));

}*/