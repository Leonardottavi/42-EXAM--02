#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr; // Puntatore temporaneo per scorrere la lista

    list_ptr = begin_list; // Inizializza il puntatore alla testa della lista
    while (list_ptr) // Continua finché il puntatore non è NULL (fine della lista)
    {
        (*f)(list_ptr->data); // Chiama la funzione puntata da f, passando il dato dell'elemento corrente
        list_ptr = list_ptr->next; // Passa all'elemento successivo della lista
    }
}
