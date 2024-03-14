void	ft_swap(char *a, char *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	int len = ft_strlen(str);

	while(str[i] && (len / 2) > i)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return(str);
}
