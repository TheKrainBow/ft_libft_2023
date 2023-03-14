#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	dest = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(dest + ft_strlen(s1), s2, ft_strlen(s2));
	return (dest);
}