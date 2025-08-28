int     max(int* tab, unsigned int len)
{
    if (len == 0)
        return (0);
    
    unsigned int i = 0;
    unsigned int j = 1;

    while (j < len)
    {
        if (tab[i] < tab[j])
        {
            i = j;
            j = i + 1;
        }
        else
            j++;
    }
    return (tab[i]);
}

// #include <stdio.h>
// int main (void)
// {
//     int tab[] = {1, 5, 9, 7, 3, 4, 12};
//     unsigned int len = 7;
//     printf ("%d", max(tab, len));
//     return (0);
// }