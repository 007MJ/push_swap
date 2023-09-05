/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:35:47 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/05 19:27:04 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_last(t_stack	**lst, t_stack	*new)
{
	t_stack	*last;

	last = *lst;
	if (!lst || !new)
		return ;
	if (last->next == NULL)
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
}
