#include "libft.h"

void	*ft_calloc(size_t n_elements, size_t element_size)
{
	void	*ret;

	if (!n_elements || !element_size)
	{
		n_elements = 1;
		element_size = 1;
	}
	ret = malloc(n_elements * element_size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, n_elements * element_size);
	return (ret);
}
