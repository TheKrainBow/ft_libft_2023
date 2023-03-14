#include "libft.h"

int main() {
	char *str = "\t\v\f\r\n \f+\t\v\f\r\n \f1234";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	ft_putnbr_fd(-2147483648, 1);
	return (1);
}