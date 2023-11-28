/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:35:47 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 12:55:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_last(t_stack *lst, int newnb, int index)
{
	t_stack	*new;
	t_stack	*current;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->nb = newnb;
	new->index = index;
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
