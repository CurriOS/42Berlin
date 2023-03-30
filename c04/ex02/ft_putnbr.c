#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long num;
    int i;
    char str[11];

    i = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        num = nb;
        num = -num;
    }
    else
        num = nb;

    while (num != 0)
    {
        str[i] = num % 10 + '0';
        num /= 10;
        if (num != 0)
            i++;
    }

    while (i >= 0)
        ft_putchar(str[i--]);

}

/*
int main()
{
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
}
*/