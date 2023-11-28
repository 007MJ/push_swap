/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:55:57 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 17:42:00 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_stack(t_stack *lst, int newnb)
{
	t_stack	*new;
	t_stack	*current;

	new = new_stack();
	current = NULL;
	new->nb = newnb;
	new->next = NULL;
	if (lst == NULL)
	{
		lst = new;
	}
	else
	{
		current = lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
