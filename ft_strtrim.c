/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:16:26 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/18 00:23:16 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (*s1 != '\0' && *set != '\0')
	{
		i = 0;
		j = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j] && ft_strchr(set, s1[j]) && j >= i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 2));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 2);
	}
	return (str);
}
/*int main(void)
{
	char *d = ft_strtrim("BbatataB", "B");
	printf("Result is: %s\n", d);
	return (0);
}*/