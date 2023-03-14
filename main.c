#include "libft.h"
#include <string.h>

int main() {
	char *dest = NULL;
	char *dest2 = NULL;
	char *srcs = "nyan !";
	char *srcs2 = "nyan !";
	int size = 0;

	printf("'%lu' '%s' '%s'\n", strlcat(dest, srcs, size), dest, srcs);
	printf("'%zu' '%s' '%s'\n", ft_strlcat(dest2, srcs2, size), dest2, srcs2);
	free(dest);
	free(dest2);
	return (1);
}