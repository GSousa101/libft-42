#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*s_char;

	s_char = (char *)s;
	while (n--)
	{
		if (*s_char == (char)c)
			return (s_char);
		s_char++;
	}
	return (0);
}
