#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_string = ft_calloc(len_s1 + len_s2 + 1, sizeof(char *));
	if (!new_string)
		return (NULL);
	// Copia
	ft_strlcpy(new_string, s1, len_s1 + 1);
	// Concatena
	ft_strlcat(new_string, s2, len_s1 + len_s2 + 1);
	return (new_string);
}
