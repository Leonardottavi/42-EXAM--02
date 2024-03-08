#include <stdlib.h>
#include "sort_list.list.h"

// Funzione per ordinare una lista utilizzando l'algoritmo di bubble sort
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap; // Variabile temporanea per lo scambio di dati
    t_list *tmp; // Puntatore temporaneo alla testa della lista

    tmp = lst; // Memorizza la testa originale della lista

    // Ciclo per eseguire l'ordinamento della lista
    while (lst->next != NULL)
    {
        // Se la funzione di confronto restituisce 0, significa che i dati non sono ordinati
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data; // Effettua lo scambio dei dati
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp; // Riporta il puntatore della lista all'inizio
        }
        else
        {
            lst = lst->next; // Passa al nodo successivo se i dati sono ordinati correttamente
        }
    }

    lst = tmp; // Riporta il puntatore della lista all'inizio
    return (lst); // Restituisce la lista ordinata
}
