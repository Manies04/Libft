/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:07:09 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/21 02:03:18 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Allocates (with malloc(3)) and returns a substring from the string 
 * 's'. The substring begins at index 'start' and is of maximum size 'len'.
 *@param s: The string from which to create the substring.
 *@param start: The start index of the substring in the string 's'.
 *@param len: The maximum length of the substring.
 *@return The substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
// int main(void)
// {
// 	char *d = ft_substr("Batata", 0, 20);
// 	printf("Result is: %s\n", d);
// 	return (0);
// }
//l21 - size of char is 1
//l28 - start 0 para cima e o j - que a len para '\0'