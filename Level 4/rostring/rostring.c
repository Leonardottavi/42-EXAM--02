#include <unistd.h>

char space(char c)
{
	return(c <= 32);
}

void	rostring(char *str)
{
	int i = 0;
	int flag = 0;
	while(space(str[i]))
		i++;
	int j = i;
	while(!space(str[i]))
		i++;
	int end = i;
	while(space(str[i]) && str[i] != '\0')
		i++;
	while(str[i] != '\0')
	{
		while(space(str[i]) && space(str[i + 1]))
			i++;
		if(space(str[i]))
			flag = 1;
		write(1, &str[i], 1);
		i++;
	}
	if(flag)
		write(1, " ", 1);
	while(j < end)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if(ac > 1 && av[1][0])
		rostring(av[1]);
	write(1, "\n", 1);
}
