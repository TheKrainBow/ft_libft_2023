#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	new_node->content = content;
	return (new_node);
}