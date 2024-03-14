#include <stdio.h>

// La funzione ft_strchr prende una stringa s1 e un carattere c come input.
// Scorre la stringa s1 e se trova il carattere c, ritorna 1.
// Se non trova il carattere c nella stringa, ritorna 0.
int ft_strchr(const char *s1, char c)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return (1);
    i++;
    }
    return (0);
}

// La funzione ft_strcspn prende due stringhe come input: s e reject.
// Scorre la stringa s e per ogni carattere, controlla se è presente nella stringa reject utilizzando la funzione ft_strchr.
// Se trova un carattere di s nella stringa reject, ritorna l'indice di quel carattere in s.
// Se non trova nessun carattere di s in reject, ritorna la lunghezza di s.
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t  i = 0;

    while (s[i])
    {
        if (ft_strchr(reject,s[i]) == 1)
            return (i);
        i++;
    }
    return (i);
}
