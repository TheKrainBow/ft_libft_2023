#include "libft.h"

int ft_count_words(char const *str, char c)
{
	size_t count;

	count = 0;
	while (*str && *str == c)
		str++;

	if (*str == 0)
		return (0);

	while (*str)
	{
		count++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (count);
}

char **ft_delete_all(char **dest, int word) {
	int i;

	i = 0;
	while (i < word) {
		free(dest[i]);
		i++;
	}
	free(dest);
	return NULL;
}

char **ft_split(char const *str, char c)
{
	char **dest;
	const char *start;
	int word;

	if (str == NULL)
		return (NULL);
	dest = malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	if (dest == NULL)
		return (NULL);
	while (*str && *str == c)
		str++;
	word = 0;
	while (*str)
	{
		start = str;
		while (*str && *str != c)
			str++;
		dest[word] = ft_substr(start, 0, str - start);
		if (dest[word] == NULL) {
			return (ft_delete_all(dest, word));
		}
		word++;
		while (*str && *str == c)
			str++;
	}
	dest[word] = NULL;
	return (dest);
}