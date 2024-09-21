/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <thblonde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:14:37 by thblonde          #+#    #+#             */
/*   Updated: 2024/04/17 19:33:50 by thblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i + ft_strlen(needle) <= len)
	{
		j = 0;
		k = i;
		while (needle[j] && haystack[k] == needle[j])
		{
			j++;
			k++;
		}
		if (j == ft_strlen(needle))
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
