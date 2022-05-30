#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	need_len;
	
	if (!(*needle))
		return ((char *)haystack);
	need_len = ft_strlen(needle);
	// Percorre o haystack até o fim E a quantidade de letras para verificar deve ser maior que o need_len.
	while (*haystack && n-- >= need_len)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, need_len))
				return ((char *)haystack);
		haystack++;
	}
	return (0);
}
