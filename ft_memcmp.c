#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_c != *s2_c)
			return ((int)(*s1_c - *s2_c));
		s1_c++;
		s2_c++;
	}
	return (0);
}
