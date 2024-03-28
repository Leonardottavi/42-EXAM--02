#include <unistd.h>

char space(char c)
{
	return(c <= 32);
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
				write(1, "   ", 1);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
}
