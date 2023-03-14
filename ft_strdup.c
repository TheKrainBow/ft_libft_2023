#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dest;

	if (str == NULL && *str == 0)
		dest = NULL;
	dest = malloc((sizeof(char) * (ft_strlen(str) + 1)));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, str, ft_strlen(str) + 1);
	return (dest);
}