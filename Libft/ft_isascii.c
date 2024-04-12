/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:36:02 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/10 13:02:23 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return(1);
	return(0);
}
/* int	main(void)
{
	#include<stdio.h>

	int	result = ft_isascii('a');
	printf("Result is: %d\n", result);
} */