void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i; // Indice per scorrere l'array
    int temp; // Variabile temporanea per lo scambio di valori

    i = 0; // Inizializza l'indice a zero

    // Ciclo per eseguire il sorting finché non ci sono più scambi da fare
    while (i < size - 1)
    {
        // Se l'elemento corrente è maggiore del successivo, scambia i valori
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0; // Riporta l'indice a zero per ricominciare il sorting dall'inizio
        }
        else
        {
            i++; // Passa all'elemento successivo se non è necessario uno scambio
        }
    }
}
