#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int x = 0;
    
    while (s1[x] != '\0')
    {
        while (s2[i] != s1[x] && s2[i] != '\0')
            i++;
        if (s2[i] == s1[x])
            return ((char *)&s1[x]);       
        x++;
        i = 0;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
//     const char *s1 = "abcd";
//     const char *s2 = "dfgh";
//     printf ("%s\n", strpbrk(s1, s2));
//     printf ("%s\n", ft_strpbrk(s1, s2));
//     return (0);
// }