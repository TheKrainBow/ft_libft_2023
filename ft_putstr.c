#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void ft_putstr(char *s)
{
	ft_putstr_fd(s, 0);
}