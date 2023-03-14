#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *dest;

	if (count > 4294967295)
		return (NULL);
	dest = malloc(count * size);
	if (dest == NULL)
		return dest;
	ft_bzero(dest, count * size);
	return (dest);
}
