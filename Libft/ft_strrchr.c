/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:12:00 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/14 17:42:13 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int i)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == i)
			return ((char *)&s[len]);
		len--;
	}
	if (i == '\0')
		return ((char *)s);
	return (NULL);
}