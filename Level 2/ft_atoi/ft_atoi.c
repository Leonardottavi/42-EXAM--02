int	ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;

	while(*str <= 32)
		str++;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	if(*str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return(sign * res);
}
