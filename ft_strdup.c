#include "libft.h"
char	*ft_strdup(const char *src)
{
	char	*res;
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(src);
	res = malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	while (i < j)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}