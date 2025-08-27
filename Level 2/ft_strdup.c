#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;
    char *result;

    if (!src)
        return (NULL);

    while (src[len] != '\0')
        len++;
    
    result = malloc(len + 1 * sizeof(char *));
    if (!result)
        return (NULL);

    while (src[i] != '\0')
    {
        result[i] = src[i];
        i++;
    }
    result[i] = '\0';
    return (result);    
}

// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
//     char *src = "";
//     printf ("%s\n", strdup(src));
//     printf ("%s\n", ft_strdup(src));
//     return (0);
// }