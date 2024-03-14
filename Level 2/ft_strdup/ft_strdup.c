#include <stdlib.h>

// La funzione prende come input un puntatore a char, che è la stringa da duplicare.
char	*ft_strdup(char *src)
{
	int	i = 0;
	int	length = 0;
	char	*strcpy;

	// Questo ciclo while calcola la lunghezza della stringa src.
	while (src[length])
		length++;

	// Qui viene allocata la memoria per la nuova stringa, strcpy.
	// La dimensione è la lunghezza della stringa originale più uno per lo spazio del carattere null.
	strcpy = malloc(sizeof(*strcpy) * (length + 1));

	// Se l'allocazione di memoria è riuscita (cioè, strcpy non è NULL)...
	if (strcpy != NULL)
	{
		// ...questo ciclo while copia i caratteri dalla stringa originale alla nuova stringa.
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}

		// Infine, viene aggiunto il carattere null alla fine della nuova stringa.
		strcpy[i] = '\0';
	}

	// La funzione ritorna il puntatore alla nuova stringa.
	return (strcpy);
}
