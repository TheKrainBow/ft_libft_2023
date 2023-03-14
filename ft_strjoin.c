#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;

	dest = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(dest + ft_strlen(s1), s2, ft_strlen(s2));
	return (dest);
}