#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t x = 0;

    while (s[x] != '\0')
    {
        while (reject[i] != s[x] && reject[i] != '\0')
            i++;
        
        if (reject[i] == s[x])
            return (x);
        x++;
        i = 0;
    }
    return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
//     const char *s = "Beat+riz";
//     const char *reject = "lkjlhkljkhljkjl+";
//     printf ("%lu\n", ft_strcspn(s, reject));
//     printf ("%lu\n", strcspn(s, reject));
//     return (0);
// }