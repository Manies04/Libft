/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:22:18 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/12 12:28:10 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;
	
	d = (char *)dest;
	s = (char *)src;
	i = -1;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest <= src || dest >= (src + n))
	{
		while (++i < n)
		{
			d[i] = s[i];
		}
	}
	else
	{
		i += n;
		while ((int)i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}