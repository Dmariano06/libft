int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	i = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
	{
		i++;
	}
    else if (str[i] == '-')
	{
		sign *= -1;
        i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}
