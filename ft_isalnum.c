/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:35:35 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/15 10:35:18 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') 
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/* int	main(void)
{
	int	result = ft_isalnum('4');
	printf("Result is: %d\n", result);
} */