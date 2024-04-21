/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:50:14 by tiade-al          #+#    #+#             */
/*   Updated: 2024/04/21 22:58:28 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
