/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <thblonde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:15:01 by thblonde          #+#    #+#             */
/*   Updated: 2024/04/16 17:03:16 by thblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while ((char)s[i])
		i++;
	while (i > 0 && (char)s[i] != (char)c)
		i--;
	if ((char)s[i] == (char)c)
		return (&((char *)s)[i]);
	else
		return (NULL);
}
