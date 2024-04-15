/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:45:18 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/15 10:54:55 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		c;

	c = 0;
	i = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && i < n)
	{
		if (s1[c] < s2[c])
			return (-1);
		if (s1[c] > s2[c])
			return (1);
		c++;
		i++;
	}
	return (0);
}
/*int	main(void)
{
	int	d = ft_strncmp("BAtata", "Batata", 2);
	printf("The Result is: %d\n", d);

	return (0);
}*/