#include "libft.h"

void ft_putnbr_fd_recu(long int n, int fd) {
	if (n != 0)
	{
		ft_putnbr_fd_recu(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	long int number;

	number = n;
	if (n < 0) {
		number *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n == 0) {
		ft_putchar_fd('0', fd);
		return ;
	}
	ft_putnbr_fd_recu(number, fd);
}

void ft_putnbr(int n)
{
	ft_putnbr_fd(n, 0);
}