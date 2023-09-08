/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:35:47 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/07 22:17:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_last(t_stack *lst, int newnb)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->nb = newnb;
	new->next = NULL;
	if (lst == NULL)
	{
		lst = new;
	}
	else
	{
		t_stack	*current;

		current = lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
