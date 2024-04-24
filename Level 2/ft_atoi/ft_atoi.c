// La funzione 'ft_atoi' prende come input una stringa 'str'.
int	ft_atoi(const char *str)
{
	// Inizializza il risultato (res) a 0 e il segno (sign) a 1.
	int res = 0;
	int sign = 1;

	// Salta tutti i caratteri di spaziatura all'inizio della stringa.
	while(*str <= 32)
		str++;

	// Se il primo carattere non di spaziatura è un meno ('-'), imposta il segno a -1 e avanza alla prossima posizione.
	if(*str == '-')
	{
		sign = -1;
		str++;
	}

	// Se il primo carattere non di spaziatura (o il carattere successivo a un meno) è un più ('+'), avanza alla prossima posizione.
	if(*str == '+')
		str++;

	// Mentre il carattere corrente è un numero (da '0' a '9')...
	while(*str >= '0' && *str <= '9')
	{
		// ...moltiplica il risultato corrente per 10 e aggiunge il valore numerico del carattere corrente (ottenuto sottraendo 48, il valore ASCII di '0').
		res = res * 10 + *str - 48;
		str++;
	}

	// Restituisce il risultato moltiplicato per il segno, che sarà 1 per i numeri positivi o -1 per i numeri negativi.
	return(sign * res);
}
