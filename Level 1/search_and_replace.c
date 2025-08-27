#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;

    if (argc != 4)
    {
        write (1, "\n", 1);
        return (0);
    }

    // int x = 0;
    // while (argv[2][x] != '\0')
    //     x++;
    
    // int y = 0;
    // while (argv[3][y] != '\0')
    //     y++;
    
    // if (y != 1 || x != 1)
    // {
    //     write (1, "\n", 1);
    //     return (0);
    // }
    
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
        write (1, &argv[1][i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}