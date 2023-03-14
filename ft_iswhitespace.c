#include "libft.h"

int ft_iswhitespace(int c)
{
	return (c == '\t' || c == '\n' || c == '\r'
	|| c == '\v' || c == '\f' || c == ' ');
}