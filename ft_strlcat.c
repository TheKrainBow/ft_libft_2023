#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	if (dst == NULL && dstsize == 0) {
		return ft_strlen(src);
	}
	size = ft_strlen(dst);
	if (size > dstsize)
		return (dstsize + ft_strlen(src));
	return (ft_strlcpy(dst + size, src, dstsize - size) + size);
}
