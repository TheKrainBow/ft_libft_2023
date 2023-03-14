#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
