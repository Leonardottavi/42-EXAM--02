#include <unistd.h>

int space(int c)
{
	return(c <= 32);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int i = 0;
	int flag = 0;

	while(space(str[i]))
		i++;
	while(str[i])
	{
		if(space(str[i]))
			flag = 1;
		if(!space(str[i]))
		{
			if(flag)
				ft_putchar(' ');
			flag = 0;
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		epur_str(av[1]);
	ft_putchar('\n');
}
