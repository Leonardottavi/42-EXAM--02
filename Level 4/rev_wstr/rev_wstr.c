#include <unistd.h>

char space(char c)
{
	return(c == ' ' || c == '\t');
}

void	rev_str(char *str)
{
	int flag = 0;
	int i = 0;
	while(str[i] != '\0')
		i++;
	while(i >= 0)
	{
		while(space(str[i]) || str[i] == '\0')
			i--;
		int end = i;
		while(!space(str[i]) && str[i])
			i--;
		int start = i + 1;
		flag = start;
		while(start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if(flag > 0)
			write(1, " ", 1);
	}
}

int main(int ac, char **av)
{
	if(ac==2)
		rev_str(av[1]);
	write(1, "\n", 1);
	return 0 ;
}
