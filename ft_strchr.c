#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);

	while (s && *s && *s != (char) c)
	{
		s++;
	}
	if (*s == (char) c)
	{
		return ((char *) s);
	}
	return (NULL);
}
