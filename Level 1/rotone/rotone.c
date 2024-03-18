#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while(*s)
	{
		if((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
			put_char(*s + 1);
		else if ( *s == 'z' || *s == 'Z')
			put_char(*s - 25);
		else
			put_char(*s);
		s++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
