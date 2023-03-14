#include "libft.h"

int ft_isdigit(int c)
{
	return ft_isbetween(c, '0', '9');
}