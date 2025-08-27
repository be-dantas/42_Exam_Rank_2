int is_numb(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int signal = 1;
    int result = 0;

    while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signal = -1;
        i++;
        if (!is_numb(str[i]))
            return (0);
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * signal);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     const char teste[4] = "3-";
//     printf ("%d\n", ft_atoi(teste));
//     printf ("%d\n", atoi(teste));
//     return (0);
// }