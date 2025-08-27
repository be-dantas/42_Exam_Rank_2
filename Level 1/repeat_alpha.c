#include <unistd.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            int n;
            n = argv[1][i] - 96;
            while (n > 0)
            {
                write(1, &argv[1][i], 1);
                n--;
            }
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            int n;
            n = argv[1][i] - 64;
            while (n > 0)
            {
                write(1, &argv[1][i], 1);
                n--;
            }
        }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}