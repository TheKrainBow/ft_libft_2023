#include "libft.h"

void *ft_memset(void *b, int c, size_t len) {
 size_t i;
	unsigned char *casted_b;

	casted_b = (unsigned char *)b;
	i = 0;
	while (casted_b && casted_b[i] && i < len) {
		casted_b[i] = c
		i++;
	}
	return b;
}
