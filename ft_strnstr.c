#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

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
char *ft_strnstr(const char *big, const char *little, size_t len) {
    size_t len_little = ft_strlen(little);
    size_t i = 0;

    if (len_little == 0) {
        return (char *)big;
    }

    while (i + len_little <= len && big[i]) {
        if (big[i] == little[0] && ft_strncmp(&big[i], little, len_little) == 0) {
            return (char *)&big[i];
        }
        i++;
    }
    return NULL;
}

/*#include <stdio.h>
#include <string.h>
int main() {
    char big[] = "Hello, world!";
    char little[] = "";
   // size_t len = ft_strlen(big);

   // char *ptr = ft_strnstr(big, little, len);
  //  char *ptr = strnstr(big, little, 0);
   //const char *ptr = strnstr(big, little, len);

    if (ptr != NULL) 
    {
        printf("%s %ld", little, ptr - big);
    } else 
    {
        printf("nothing found %s", little);
    }

    return 0;
}*/