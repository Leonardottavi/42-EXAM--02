#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char db[256] = {0};

		while(s1[i])
		{
			j = 0;
			while(s2[j])
			{
				if(s2[j] == s1[i]) // if there is a repeating character, execute the next lines
				{
					if(db[(int)s1[i]] == 0)
					{
						db[(int)s1[i]] = 1;
						write(1, &s2[j], 1);
					}
				}
				j++;
			}
			i++;
		}
}

int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
