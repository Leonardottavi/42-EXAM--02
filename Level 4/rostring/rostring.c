#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Funzione che stampa una stringa sullo standard output
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

// Funzione che verifica se il carattere è uno spazio, un tab o un carattere di nuova riga
int is_space(int c)
{
    return (c == 32 || c == 9 || c == 10);
}

// Funzione che conta le parole nella stringa s
int word_count(char *s)
{
    int i = 0;
    int wc = 0;

    while (s[i])
    {
        while (s[i] && is_space(s[i]))
            i++;
        if (s[i])
            wc++;
        while (s[i] && !is_space(s[i]))
            i++;
    }
    return (wc);
}

// Funzione che copia al massimo len caratteri dalla stringa src alla stringa dest
char *ft_strncpy(char *dest, char *src, int len)
{
    int i = 0;
    while (src[i] && i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

// Funzione che divide la stringa s in parole e restituisce un array di puntatori alle parole
char **ft_split(char *s)
{
    int i = 0;
    int wc = word_count(s); // Numero di parole nella stringa s
    int k = 0;
    int start;
    int end;
    char **res;

    res = (char **)malloc(sizeof(char *) * (wc + 1)); // Alloca memoria per l'array di puntatori alle parole
    if (!res)
        return (NULL);

    while (s[i])
    {
        while (s[i] && is_space(s[i]))
            i++;
        start = i;
        while (s[i] && !is_space(s[i]))
            i++;
        end = i;
        if (start < end)
        {
            res[k] = (char *)malloc(end - start + 1); // Alloca memoria per la parola
            ft_strncpy(res[k++], &s[start], end - start); // Copia la parola nell'array
        }
    }
    res[k] = NULL; // Imposta l'ultimo elemento dell'array a NULL per indicare la fine delle parole
    return (res);
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        char *s = av[1];
        char **res = ft_split(s); // Ottieni l'array di parole dalla stringa

        while (res[i] != NULL)
        {
            ft_putstr(res[i++]); // Stampa ogni parola
            write(1, " ", 1); // Stampa uno spazio tra le parole
        }
        ft_putstr(res[0]); // Stampa l'ultima parola senza uno spazio dopo
    }
    write(1, "\n", 1); // Stampa un carattere di nuova riga
    return (0);
}
