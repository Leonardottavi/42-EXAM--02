// La funzione 'ser' prende come input una stringa 's' e due caratteri 'c' e 'd'.
// Scorre la stringa 's' e per ogni carattere che corrisponde a 'c', lo sostituisce con 'd'.
// Poi scrive il carattere (sia che sia stato sostituito o no) sullo standard output.
void	ser(char *s, char c, char d)
{
	while (*s)
	{
		if (*s == c)
			*s = d;
		write(1, s++, 1);
	}
}

// La funzione 'main' controlla se il numero di argomenti passati al programma è 4
// e se i secondi e terzi argomenti sono stringhe di un solo carattere.
// Se queste condizioni sono soddisfatte, chiama la funzione 'ser' con il primo argomento come stringa
// e il secondo e terzo argomento come caratteri da cercare e sostituire, rispettivamente.
// Infine, scrive un carattere di nuova linea sullo standard output.
int	main (int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
		ser(av[1],av[2][0],av[3][0]);
	write(1, "\n", 1);
}
