#include <unistd.h>

void putchar(char y)
{
    write(1, &y, 1);
}

void putnbr(int x)
{
    if (x > 9)
        putnbr(x / 10);
    putchar((x % 10) + '0');
}

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }
}