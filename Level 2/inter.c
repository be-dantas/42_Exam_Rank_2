#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;

    if (argc != 3)
    {
        write (1, "\n", 1);
        return (0);
    }

    while (argv[1][i] != '\0')
    {
        int x = 0;
        while (x < i && argv[1][i] != argv[1][x])
            x++;

        if (x == i)
        {
            int j = 0;
            while (argv[2][j] != '\0' && argv[1][i] != argv[2][j])
                j++;
            if (argv[2][j] != '\0' && argv[1][i] == argv[2][j])
                write (1, &argv[1][i], 1);
        }
        i++;
    }
    write (1, "\n", 1);
    return (0);
}
