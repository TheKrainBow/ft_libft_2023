#include "libft.h"

char *ft_substr(const char *str, unsigned int start, size_t len)
{
	char *dest;
	size_t i;
	int allocated_size;
	size_t str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);

	if (start >= str_len)
		return (ft_strdup(""));

	if (len > str_len)
		allocated_size = str_len;
	else
		allocated_size = len;

	dest = ft_calloc(allocated_size + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		dest[i] = str[start + i];
		i++;
	}
	return (dest);
}