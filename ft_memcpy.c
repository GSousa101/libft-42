#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	size_t	i;

	if (dest == 0 && source == 0 && n > 0)
		return (0);
	i = 0;
	while (n--)
	{
		((char *)dest)[i] = ((char *)source)[i];
		i++;
	}
	return (dest);
}
