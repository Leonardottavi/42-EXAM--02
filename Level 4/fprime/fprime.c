#include <stdlib.h>
#include <stdio.h>

// Funzione che stampa i fattori primi del numero n separati da '*'
void fprime(int n)
{
    // Se il numero è 1, stampa direttamente "1"
    if (n == 1)
        printf("1");

    int i = 2;

    // Ciclo per trovare i fattori primi di n
    while (n >= i)
    {
        // Se n è divisibile per i
        if (n % i == 0)
        {
            printf("%d", i);

            // Se n non è uguale a i, significa che ci sono ancora altri fattori primi da trovare
            if (n != i)
                printf("*");

            // Dividi n per i per ottenere il prossimo fattore primo
            n /= i;
        }
        else
        {
            // Se n non è divisibile per i, passa al prossimo numero
            i++;
        }
	}
}

int main(int ac, char **av)
{
    // Verifica se è stato passato un argomento alla riga di comando
    if (ac == 2)
        // Chiama la funzione fprime con il numero convertito da stringa a intero
        fprime(atoi(av[1]));

    printf("\n");
    return 0;
}
