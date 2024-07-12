#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void	ft_swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

char    *ft_strrev(char *str)
{
	int len = ft_strlen(str);
	int j = ft_strlen(str) - 1;
	int i = 0;

	while(str[i] && (len / 2) > i)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return str;
}
/*
int main(int ac, char **av)
{
	(void)ac,
	printf("%s", ft_strrev(av[1]));
}
*/
