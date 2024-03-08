#include <stdlib.h>
#include <stdio.h>

// Funzione che converte un intero in una stringa di caratteri
char *ft_itoa(int n)
{
    int n2 = n; // Copia di n per calcolare la lunghezza senza modificarlo
    int len = 0; // Lunghezza della stringa risultante
    char *res; // Puntatore alla stringa risultante

    // Gestione dei casi speciali: valore minimo e zero
    if (n == -2147483648)
        return ("-2147483648\0");
    if (n == 0)
        return ("0\0");

    // Se n è negativo, incrementa la lunghezza
    if (n2 < 0)
        len++;

    // Calcolo della lunghezza della stringa risultante
    while (n2)
    {
        len++;
        n2 /= 10;
    }

    // Alloca memoria per la stringa risultante
    res = (char *)malloc(len + 1);
    res[len] = '\0'; // Terminatore di stringa

    // Gestione dell'allocazione fallita
    if (!res)
        return (0);

    // Se n è negativo, inserisce il segno meno nella stringa risultante
    if (n < 0)
    {
        res[0] = '-';
        n = -n;
    }

    // Conversione di n in stringa
    while (n)
    {
        res[--len] = n % 10 + '0'; // Converte il resto della divisione per 10 in carattere ASCII
        n /= 10;
    }

    // Restituisce il puntatore alla stringa risultante
    return (res);
}

// Funzione main per testare ft_itoa
int main(int ac, char **av)
{
    // Verifica se è stato passato un argomento alla riga di comando
    if (ac == 2)
        // Chiama ft_itoa con l'argomento convertito da stringa a intero e stampa il risultato
        printf("%s\n", ft_itoa(atoi(av[1])));

    return 0;
}
