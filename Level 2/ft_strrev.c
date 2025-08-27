char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char temp = 0;

    while (str[len] != '\0')
        len++;
    
    while (i < len - 1)
    {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        i++;
        len--;
    }
    return(str);    
}

#include <stdio.h>
int main (void)
{
    char str[] = "ola";
    printf ("%s", ft_strrev(str));
    return (0);
}