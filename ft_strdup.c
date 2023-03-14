#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dest;

	dest = malloc((sizeof(char) * ft_strlen(str)));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, str, ft_strlen(str));
	return (dest);
}