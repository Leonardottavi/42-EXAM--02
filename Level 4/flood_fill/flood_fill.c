typedef struct s_point
{
    int x;
    int y;
} t_point;

// Funzione ricorsiva per riempire l'area con il carattere specificato
void fill(char **tab, t_point size, t_point cur, char to_fill)
{
    // Verifica se la posizione corrente è fuori dalla griglia o se il carattere non corrisponde
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return; // Esci dalla funzione

    // Sostituisci il carattere corrente con il carattere specificato
    tab[cur.y][cur.x] = 'F';

    // Richiama la funzione fill per i vicini della posizione corrente in tutte e quattro le direzioni
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill); // Sinistra
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill); // Destra
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill); // Sopra
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill); // Sotto
}

// Funzione principale per eseguire l'algoritmo di flood fill
void flood_fill(char **tab, t_point size, t_point begin)
{
    // Chiama la funzione fill con i parametri iniziali
    fill(tab, size, begin, tab[begin.y][begin.x]); // Inizia dalla posizione specificata e usa il carattere in quella posizione
}
