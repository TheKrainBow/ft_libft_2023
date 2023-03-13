#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*casted_dst;
	const char	*casted_src;
	size_t		i;

	if (!dst && !src)
		return (0);

	casted_dst = dst;
	casted_src = src;

	while (casted_dst > casted_src && len-- > 0)
		casted_dst[len] = casted_src[len];

	i = 0;
	while (casted_dst <= casted_src i < len)
	{
		casted_dst[i] = casted_src[i];
		i++;
	}
	return (dst);
}