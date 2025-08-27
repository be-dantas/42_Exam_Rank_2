#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;
    int x = 0;
    int c = 0;

    if (argc != 3)
    {
        write (1, "\n", 1);
        return (0);
    }

    while (argv[1][i] != '\0')
    {
        c = 0;
        while (c < i && argv[1][c] != argv[1][i])
            c++;

        if (c == i)
        {
            x = 0;
            while (argv[2][x] != '\0' && argv[2][x] != argv[1][i])
                x++;

            if (argv[2][x] != '\0' && argv[2][x] == argv[1][i])
                write(1, &argv[1][i], 1);
        }
        i++;
    }

    write (1, "\n", 1);
    return (0);
}