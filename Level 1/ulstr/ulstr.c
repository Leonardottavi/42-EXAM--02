#include <unistd.h>

// La funzione 'ulstr' prende come input una stringa 's'.
// Scorre la stringa 's' e per ogni carattere, controlla se è una lettera maiuscola o minuscola.
// Se è una lettera minuscola, la converte in maiuscola sottraendo 32 (la differenza tra lettere minuscole e maiuscole nella tabella ASCII).
// Se è una lettera maiuscola, la converte in minuscola aggiungendo 32.
// Poi scrive il carattere (sia che sia stato convertito o no) sullo standard output.
void ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		else if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		write(1, s, 1);
		s++;
	}
}

// La funzione 'main' controlla se il numero di argomenti passati al programma è 2.
// Se questa condizione è soddisfatta, chiama la funzione 'ulstr' con il secondo argomento.
// Infine, scrive un carattere di nuova linea sullo standard output.
int main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
}
