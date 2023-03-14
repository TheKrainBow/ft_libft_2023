#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	size_t i;

	if (s1 == NULL)
		return ft_strdup("");
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return ft_strdup("");
	i = ft_strlen(s1);
	while (s1[i - 1] && ft_strrchr(set, s1[i - 1]))
		i--;
	dest = ft_substr(s1, 0, i);
	return (dest);
}