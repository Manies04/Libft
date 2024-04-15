/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:22:18 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/15 16:24:07 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = -1;
	d = dest;
	s = src;
	if (dest <= src || dest >= (src + n))
		while (++i < n)
			d[i] = s[i];
	else
	{
		i += n;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}

int main(void)
{
	#include <string.h>
	
	char src1[] = "Banana";
	char src2[] = "Banana";
	char dest1[] = "Maca";
	char dest2[] = "Maca";
	//memmove(dest2, src2, 5);
	//printf("Result is: %s\n", dest2);
	ft_memmove(dest2, src2, 5);
	printf("Result is: %s\n", dest2);
	return (0);
}