/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:06:00 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/21 01:53:44 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	i;
	int		b;

	i = 0;
	b = 0;
	if (!s[b])
		return (0);
	while (s[b])
	{
		while (s[b] == c)
			b++;
		if (s[b])
			i++;
		while (s[b] != c && s[b])
			b++;
	}
	return (b);
}

/**@brief Allocates (with malloc(3)) and returns an array of strings obtained
 * by splitting 's' using the character 'c' as a delimiter. The array must be
 * ended by a NULL pointer.
 * @param s: The string to split.
 * @param c: The delimiter character.
 * @return The array of new strings resulting from the split.
*/
char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**l;
	int		i;

	i = 0;
	l = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || !l)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			l[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	l[i] = NULL;
	return (l);
}
/*int main(void)
{
    char const *s = "Hello,world,this,is,a,test,string";
    char c = ',';
    char **result = ft_split(s, c);

    if (result != NULL)
    {
        for (int i = 0; result[i] != NULL; i++)
            printf("%s\n", result[i]);
        
        // Free the allocated memory
        for (int i = 0; result[i] != NULL; i++)
            free(result[i]);
        free(result);
    }
    else
    {
        printf("Failed to split the string.\n");
    }

    return (0);
}*/