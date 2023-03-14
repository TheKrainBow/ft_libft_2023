#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	int 	i;

	dest = ft_strdup(s);
	i = 0;
	while (dest && dest[i]) {
		dest[i] = f(i, dest[i]);
		i++;
	}
	return (dest);
}