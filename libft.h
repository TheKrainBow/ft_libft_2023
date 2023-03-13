#ifndef LIBFT_LIBRARY_H
#define LIBFT_LIBRARY_H

int		ft_isalpha(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isbetween(int c, int first, int last);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);

#endif //LIBFT_LIBRARY_H
