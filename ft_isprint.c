#include "libft.h"

int ft_isprint(int c)
{
	return ft_isbetween(c, 32, 126);
}