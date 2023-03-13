#include "libft.h"

char *ft_strchr(const char *s, int c) {
	char	casted_c;

	casted_c = (char)c;

	if (!s)
		return NULL;

	while (s && *s && *s != c) {
		s++;
	}
	if *s == c {
		return (char *)s
	}
	return NULL
}
