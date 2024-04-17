/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:09:51 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/17 10:36:44 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = ft_strlen(s) + 1;
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}
/*int	main(void)
{
	char *d = ft_strdup("Batata");
	printf("Result is: %s\n", d);

	return (0);
}*/