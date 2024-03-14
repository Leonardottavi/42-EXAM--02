#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if(ac == 4)
	{
		int arg1 = atoi(av[1]);
		char sign = av[2][0];
		int arg2 = atoi(av[3]);

	switch(sign)
	{
			case '+':
				printf("%d\n", arg1 + arg2);
				break;
			case '-':
				printf("%d\n", arg1 - arg2);
				break;
			case '*':
				printf("%d\n", arg1 * arg2);
				break;
			case '/':
				printf("%d\n", arg1 / arg2);
				break;
			case '%':
				printf("%d\n", arg1 % arg2);
				break;
	}
	}
}

