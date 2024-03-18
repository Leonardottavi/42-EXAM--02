#include <unistd.h>

void	put_char_n(char c, int n)
{
	while(n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void	repeat(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			put_char_n(str[i], str[i] + 1 - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			put_char_n(str[i], str[i] + 1 - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		repeat(av[1]);
	write(1, "\n", 1);
	return (0);
}
