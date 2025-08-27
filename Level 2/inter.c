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
        if (argv[2][x] == argv[1][i])
        {
            while (c <= i)
            {
                if (argv[1][c] != argv[1][i] && c < i)
                    c++;
                if (argv[1][c] == argv[1][i] && c < i)
                    write 
            }
            
        }
        else if (argv[2][x] != argv[1][i])
            x++;
        i++;
    }
    
}