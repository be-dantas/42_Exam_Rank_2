#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t x = 0;

    while (s[x] != '\0')
    {
        while (accept[i] != s[x] && accept[i] != '\0')
            i++;

        if (accept[i] == s[x])
            x++;
        
        if (accept[i] != s[x] && accept[i] == '\0')
            return (x);
        i = 0;
    }
    return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
//     const char *s = "Beatriz";
//     const char *accept = "zteB";
//     printf ("%lu\n", ft_strspn(s, accept));
//     printf ("%lu\n", strspn(s, accept));
//     return (0);
// }