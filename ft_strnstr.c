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
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t len_little = ft_strlen(little);
    size_t i;

    i = 0;
    if (len_little == 0 || len == 0)
        return (char *)big;
    
    while(i < len && big[i])
    {
        if (ft_strncmp(&big[i], little, len_little) == 0)
            return (char *)&big[i];
        i++;
    }
    return NULL; 
}
/*#include <stdio.h>
int main() {
    char big[] = "Hello, world!";
    char little[] = "ld";
    size_t len = ft_strlen(big);

    char *ptr = ft_strnstr(big, little, len);
   //const char *ptr = strnstr(big, little, len);

    if (ptr != NULL) 
    {
        printf("La sous-chaîne \"%s\" a été trouvée à l'indice %ld de la chaîne.\n", little, ptr - big);
    } else 
    {
        printf("La sous-chaîne \"%s\" n'a pas été trouvée dans la chaîne.\n", little);
    }

    return 0;
}*/