#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        ft_putchar_fd('0', fd);
        return;
    }

    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    char buffer[20];
    int index = 0;

    while (n > 0)
    {
        buffer[index++] = (n % 10) + '0';
        n /= 10;
    }

    if (sign == -1)
        ft_putchar_fd('-', fd);

    while (--index >= 0)
        ft_putchar_fd(buffer[index], fd);
}