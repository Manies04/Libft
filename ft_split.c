/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:06:00 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/18 17:09:18 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freethis(char *strs)
{
	free(strs);
}
//Free the space in strs

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	wordc;

	i = 0;
	wordc = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			wordc++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (wordc);
		}
		i++;
	}
	return (wordc);
}
//Counts the words on str being c the delimiter

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != '\0' && str[j + i] != c)
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}
//copies a word from str to word stopping when c appears

static char	*ft_stralloc(char *str, char c, int *i)
{
	char	*word;
	int		j;

	j = *i;
	word = NULL;
	while (str[*i] != '\0')
	{
		if (str[*i] != c)
		{
			while (str[*i] != '\0' && str [*i] != c)
				*i += 1;
			word = (char *)malloc(sizeof(char) * (*i + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*i += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}
//alocates memory for a word using malloc and copies the word then returns it

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (s == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_wordcount((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (j + i));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)s), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freethis(strs[i]);
		}
		i++;
	}
	return (strs);
}
/*int main()
{
	char const	*s = "Hello,world,this,is,a,test";
	char c = ',';
	char **result = ft_split(s, c);

	if (result != NULL)
	{
		for (int i = 0; result[i] != NULL; i++)
			printf("%s\n", result[i]);
		for (int i = 0; result[i] != NULL; i++)
			free(result[i]);
		free(result);
	}
	else
		printf("Failed to split the string.\n");
	return (0);
}*/
