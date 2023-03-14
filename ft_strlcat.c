#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	if (dstsize == 0)
		return (0);
	size = ft_strlen(dst);
	if (size > dstsize)
		return (dstsize + ft_strlen(src));
	return (ft_strlcpy(dst + size, src, dstsize - size) + size);
}
