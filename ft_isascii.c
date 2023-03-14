#include "libft.h"

int ft_isascii(int c)
{
	return ft_isbetween(c, 0, 127);
}