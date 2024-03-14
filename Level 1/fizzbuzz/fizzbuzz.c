#include <unistd.h>

// La funzione 'ft_write_number' prende come input un numero intero.
// Se il numero è maggiore di 9, chiama se stessa ricorsivamente con il numero diviso per 10.
// Poi scrive il carattere corrispondente all'ultimo numero (ottenuto dal modulo 10) sullo standard output.
void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

// La funzione 'main' inizia con un ciclo while che va da 1 a 100.
// Per ogni numero, controlla se è divisibile per 15, 3 o 5.
// Se è divisibile per 15, scrive "fizzbuzz" sullo standard output.
// Se è divisibile per 3, scrive "fizz".
// Se è divisibile per 5, scrive "buzz".
// Se non è divisibile né per 3 né per 5, chiama la funzione 'ft_write_number' per scrivere il numero.
// Infine, scrive un carattere di nuova linea sullo standard output.
int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(i);
		i++;
		write (1, "\n", 1);
	}
}
