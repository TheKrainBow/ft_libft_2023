#include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (src == NULL && *src == 0)
		dst = NULL;
	i = 0;
	if (!src)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (src[i])
		i++;
	return (ft_strlen(src));
}