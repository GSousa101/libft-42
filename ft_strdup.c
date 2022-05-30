#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*my_copy;
	size_t	len;

	len = ft_strlen(s1);
	my_copy = (char *)malloc((len + 1) * sizeof(char));
	if (!my_copy)
		return (NULL);
	ft_memcpy(my_copy, s1, len + 1);
	return (my_copy);
}
