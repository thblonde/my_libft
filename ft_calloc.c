/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <thblonde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:11:47 by thblonde          #+#    #+#             */
/*   Updated: 2024/08/28 14:37:54 by thblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	i = -1;
	if (!nmemb || !size)
		return (NULL);
	if (nmemb > 4294967295)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (++i < nmemb)
		((char *)p)[i] = '\0';
	return (p);
}
