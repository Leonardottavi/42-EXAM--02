#include <unistd.h>

char	space(char c)
{
	return( c == ' ' || c == '\t');
}

void	first(char *str)
{
	int i = 0;
	while(space(str[i]) && str[i] != '\0')
		i++;
	while(!space(str[i]) && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac==2)
		first(av[1]);
	write(1, "\n", 1);
}
