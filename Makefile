SRCS_CHAR	=	ft_isalnum.c						\
				ft_isalpha.c						\
				ft_isascii.c						\
				ft_isdigit.c						\
				ft_isprint.c						\
				ft_isbetween.c						\
				ft_islower.c						\
				ft_isupper.c						\
				ft_tolower.c						\
				ft_toupper.c						\

SRCS_LST	=	ft_lst_to_tab.c						\
				ft_lstadd_back.c					\
				ft_lstadd_front.c					\
				ft_lstclear.c						\
				ft_lstdelone.c						\
				ft_lstfirst.c						\
				ft_lstiter.c						\
				ft_lstlast.c						\
				ft_lstmap.c							\
				ft_lstnew.c							\
				ft_lstsize.c

SRCS_MATH	=	ft_atoi.c							\
				ft_itoa.c							\
				#ft_max.c							\
				ft_min.c							\
				ft_pow.c							\
				ft_swap.c							\
				ft_abs.c							\

SRCS_MEM	=	ft_bzero.c							\
				ft_calloc.c							\
				ft_memchr.c							\
				ft_memcmp.c							\
				ft_memcpy.c							\
				ft_memmove.c						\
				ft_memset.c							\
				# ft_free_tab.c						\
				ft_memccpy.c						\

SRCS_PRINT	=										\
				ft_putchar.c						\
				ft_putendl.c						\
				ft_putnbr.c							\
				ft_putstr.c							\
#				ft_lstprint.c						\
#				ft_print_tab.c						\

SRCS_STRS	=										\
				ft_strchr.c							\
				ft_strdup.c							\
				ft_strlcat.c						\
				ft_strlcpy.c						\
				ft_strlen.c							\
				ft_strncmp.c						\
				ft_strnstr.c						\
				ft_strrchr.c						\
				ft_substr.c							\
				ft_strjoin.c						\
				ft_strtrim.c						\
				ft_split.c							\
				ft_strmapi.c						\
				ft_striteri.c						\
#				ft_strcmp.c							\
				ft_strjoin_to.c						\
				ft_strndup.c						\
				ft_strs_rmi.c						\
				ft_strs_to_tab.c					\
				ft_strtrunc.c						\
				ft_sort_strs.c						\
				ft_tabjoin.c						\
				ft_tablen.c							\



SRCS		=	$(SRCS_CHAR) $(SRCS_GNL) $(SRCS_MEM) $(SRCS_STRS) $(SRCS_MATH) $(SRCS_PRINT)

OBJS		=	$(SRCS:.c=.o)

CC			=	@clang
RM			=	@rm -f
NAME		=	libft.a

FLAGS		=	-Wall -Werror -Wextra -I.

.c.o:
				$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME):		start_message $(OBJS)
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)
				@echo "\033[1A\033[25C\033[1;32m✓\033[0m"

all:			$(NAME)

clean:
				@echo "\033[0;33mCleaning \033[1;31m$(NAME)\033[0;33m's objects\033[0m"
				$(RM) $(OBJS)

start_message:
				@echo "\033[0;33mMaking \033[1;31m$(NAME)\033[0;33m\t\t\033[1;30m[\033[1;31mX\033[1;30m]\033[0m"

fclean:			clean
				$(RM) $(NAME)
				@echo "\033[0;33mRemoving \033[1;31m$(NAME)\033[0;33m.\033[0m"

re:				fclean all

.PHONY:			all clean fclean re
