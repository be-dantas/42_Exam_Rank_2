#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc != 2 || !argv[1])
    { 
        write (1, "\n", 1); 
        return (0); 
    }

    // descobrir o tamanho da string
    int i = 0;
    while (argv[1][i] != '\0')
        i++;

    // tirar os espaços
    i--;
    while (argv[1][i] >= 0 && argv[1][i] <= 32)
        i--;
    if (i < 0) // string só com separadores
    {
        write(1, "\n", 1);
        return (0);
    }

    // achar o início de uma palavra
    while (i >= 0 && argv[1][i] > 32)
        i--;

    i++;
    while (argv[1][i] > 32)
    {
        write (1, &argv[1][i], 1);
        i++;
    }

    write (1, "\n", 1);
    return (0);
}
