#include <stdlib.h>
#include <stdio.h>

// Funzione che verifica se il carattere è uno spazio, un tab o un carattere di nuova riga
int is_space(int c)
{
    return (c == 32 || c == 9 || c == 10);
}

// Funzione che conta le parole nella stringa s
int word_count(char *s)
{
    int i = 0;
    int wc = 0; // Contatore delle parole

    while (s[i])
    {
        while (s[i] && is_space(s[i])) // Salta gli spazi all'inizio di una parola
            i++;

        if (s[i]) // Se c'è ancora una parola
            wc++; // Incrementa il contatore delle parole

        while (s[i] && !is_space(s[i])) // Salta la parola
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

    dest[i] = '\0'; // Aggiungi il terminatore di stringa alla fine di dest
    return (dest);
}

// Funzione che divide la stringa s in parole e restituisce un array di puntatori alle parole
char **ft_split(char *s)
{
    int i = 0;
    int wc = word_count(s); // Numero di parole nella stringa s
    int k = 0; // Indice per l'array di puntatori alle parole
    int start;
    int end;
    char **res; // Array di puntatori alle parole

    res = (char **)malloc(sizeof(char *) * (wc + 1)); // Alloca memoria per l'array di puntatori alle parole

    while (s[i])
    {
        while (s[i] && is_space(s[i])) // Salta gli spazi all'inizio di una parola
            i++;

        start = i; // Memorizza l'indice di inizio della parola

        while (s[i] && !is_space(s[i])) // Salta la parola
            i++;

        end = i; // Memorizza l'indice di fine della parola

        if (start < end) // Se c'è una parola
        {
            // Alloca memoria per la parola e copiala nell'array di parole
            res[k] = (char *)malloc((end - start) + 1);
            ft_strncpy(res[k++], &s[start], end - start);
        }
    }

    res[k] = NULL; // Aggiungi NULL alla fine dell'array per indicare la fine delle parole
    return (res);
}
