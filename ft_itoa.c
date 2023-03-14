#include "libft.h"

int ft_itoa_len(int n)
{
	long int number;
	int len;

	len = 0;
	number = n;
	if (number < 0)
	{
		len++;
		number *= -1;
	}
	while (number)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	long int number;
	char *dest;
	int itoa_len;

	if (n == 0)
		return ft_strdup("0");
	itoa_len = ft_itoa_len(n);
	number = n;
	dest = ft_calloc(itoa_len + 1, sizeof(char));
	if (dest == NULL) {
		return NULL;
	}
	if (number < 0) {
		dest[0] = '-';
		number *= -1;
	}
	while (number) {
		dest[itoa_len - 1] = number % 10 + '0';
		number /= 10;
		itoa_len--;
	}
	return (dest);
}