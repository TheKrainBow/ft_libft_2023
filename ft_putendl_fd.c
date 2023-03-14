#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void ft_putendl(char *s) {
	ft_putendl_fd(s, 1);
}