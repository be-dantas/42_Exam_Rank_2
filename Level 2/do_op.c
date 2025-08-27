#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    if (argc != 4)
    {
        printf ("\n");
        return (0);
    }

    int argv1 = atoi(argv[1]);
    int argv3 = atoi(argv[3]);
    int result = 0;

    if (argv[2][0] == '+')
        result = argv1 + argv3;

    else if (argv[2][0] == '-')
        result = argv1 - argv3;

    else if (argv[2][0] == '*')
        result = argv1 * argv3;

    else if (argv[2][0] == '/')
        result = argv1 / argv3;

    else if (argv[2][0] == '%')
        result = argv1 % argv3;

    printf ("%d\n", result);
    return (0);
}