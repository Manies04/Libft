/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:36:29 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/10 13:02:15 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int	i)
{
	if (i >= '0' && i <= '9')
		return(1);
	return(0);
}
/* int	main(void)
{
	#include<stdio.h>

	int	result = ft_isdigit('4');
	printf("Result is: %d\n", result);
} */