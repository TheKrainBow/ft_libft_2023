#include "libft.h"

int ft_atoi(const char *str)
{
	int is_neg;
	int i;
	int dest;

	if (str == NULL)
		return (0);

	is_neg = 1;
	dest = 0;
	i = 0;

	if (str[i] == '-')
	{
		is_neg *= -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		dest *= 10;
		dest += str[i] - '0';
		i++;
	}
	return (dest * is_neg);
}