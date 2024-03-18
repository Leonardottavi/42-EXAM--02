#include <unistd.h> // Includes the unistd.h header file for I/O operations

// Definition of the ft_strcpy function
// Takes two strings (s1 and s2) as arguments
char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0; // Initializes a counter to 0

	// Loop that continues until it reaches the null character in s2
	while(s2[i])
	{
		s1[i] = s2[i]; // Copies the current character from s2 to s1
		i++; // Increments the counter
	}

	// Returns s2, but this might be a mistake. Usually, a strcpy function should return s1.
	return(s2);
}
