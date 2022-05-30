#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_string;

	if (!s)
		return (NULL);
	new_string = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new_string)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		new_string[i] = (*f)(i, s[i]);
	}
	new_string[i] = '\0';
	return (new_string);
}
