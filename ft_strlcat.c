#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t dest_max)
{
	size_t	dest_len;
	size_t	i;

	dest_len = 0;
	// Toma o tamanho do dest E ele deve ser menor que o dest_max do parâmetro.
	while (dest[dest_len] && dest_len < dest_max)
		dest_len++;
	i = 0;
	// Até o final da source E o que está copiando deve ser menor que o det_max
	while (source[i] && (dest_len + i + 1) < dest_max)
	{
		dest[dest_len + i] = source[i];
		i++;
	}
	if (dest_len < dest_max)
		dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(source));
}
