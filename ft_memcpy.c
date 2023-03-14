#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *casted_dst;
	const char *casted_src;
	size_t i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src == NULL && *((char *)src) == 0)
		return (NULL);
	casted_dst = dst;
	casted_src = src;
	i = 0;
	while (casted_src && i < n)
	{
		casted_dst[i] = casted_src[i];
		i++;
	}
	return (dst);
}