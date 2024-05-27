#include "libft.h"

int	ic(char c, char charset) {
	if (c == charset)
		return (1);
	return (0);
}

void	assign(char **dest, const char *str, int *idx, char charset) {
	int	sz;
	int	i;

	sz = 0;
	i = -1;
	while (str[*idx + sz] && !ic(str[*idx + sz], charset))
		sz++;
	*dest = malloc(sz + 1);
	if (*dest == NULL)
		return;
	while (++i < sz)
		(*dest)[i] = str[(*idx)++];
	(*dest)[i] = 0;
}

char	**ft_split(const char *str, char charset) {
	int		i;
	int		j;
	char	**res;

	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
		if (!ic(str[i], charset) && (i == 0 || ic(str[i - 1], charset)))
			j++;
	res = malloc((j + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i]) {
		if (!ic(str[i], charset) && (i == 0 || ic(str[i - 1], charset))) {
			assign(res + j++, str, &i, charset);
			i--;
		}
	}
	res[j] = 0;
	return (res);
}