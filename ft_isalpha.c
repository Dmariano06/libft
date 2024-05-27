int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if (c < 'A' || c > 'z' || (c < 'a' && c > 'Z'))
		return (0);
	return (1);
}