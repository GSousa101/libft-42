#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_null;

	if (!n)
		return ;
	s_null = (char *)s;
	while (n--)
		*s_null++ = 0;
}
