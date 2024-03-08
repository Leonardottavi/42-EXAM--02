#include <unistd.h>

int main(int argc, char **argv)
{
    int start; // Indice di inizio di una parola
    int end; // Indice di fine di una parola
    int i = 0; // Indice per scorrere la stringa

    if (argc == 2) // Verifica se è stato passato un solo argomento da riga di comando
    {
        // Calcola la lunghezza della stringa argv[1]
        while (argv[1][i] != '\0')
            i++;

        // Ciclo per stampare le parole al contrario
        while (i >= 0)
        {
            // Salta eventuali spazi o tab all'inizio o alla fine della stringa
            while (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
                i--;

            // Memorizza l'indice di fine di una parola
            end = i;

            // Salta la parola
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;

            // Memorizza l'indice di inizio di una parola
            start = i + 1;

            // Flag per tenere traccia dell'indice di inizio di una parola
            int flag;
            flag = start;

            // Stampa la parola dalla fine all'inizio
            while (start <= end)
            {
                write(1, &argv[1][start], 1);
                start++;
            }

            // Se non è la prima parola, stampa uno spazio
            if (flag != 0)
            {
                write(1, " ", 1);
            }
        }
    }
    write(1, "\n", 1); // Stampa un carattere di nuova riga
    return 0;
}
