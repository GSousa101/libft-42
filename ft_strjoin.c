/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:28:59 by gusousa           #+#    #+#             */
/*   Updated: 2022/05/25 17:23:08 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_strlcpy(new_string, s1, len_s1 + 1);
	ft_strlcat(new_string, s2, len_s1 + len_s2 + 1);
	return (new_string);
}
