/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:45:18 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/21 01:59:53 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Compares the two strings s1 and s2. It compares not more than n 
 * characters.
 *@param s1: The first string to be compared.
 *@param s2: The second string to be compared.
 *@param n: The maximum number of characters to be compared.
 *@return An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
*/
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