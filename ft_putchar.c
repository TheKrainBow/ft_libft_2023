#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putchar(char c) {
	ft_putchar_fd(c, 1);
}