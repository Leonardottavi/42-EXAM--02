#include <stdio.h>
#include <stdlib.h>

int do_op(int a, char sign, int b) {
	if (sign == '+')
		return a + b;
	else if (sign == '-')
		return a - b;
	else if (sign == '*')
		return a * b;
	else if (sign == '/')
		return a / b;
	else if (sign == '%')
		return a % b;
	else
		return 0;
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		char sign = argv[2][0];
		int b = atoi(argv[3]);
		int result = do_op(a, sign, b);
		printf("%d\n", result);
	}
	else
		printf("\n");
	return 0;
}
