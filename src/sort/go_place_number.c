/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_place_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/05 01:07:56 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack		*where_place(t_stack **next_b, t_stack **stack)
{
	t_stack	*curr;
	t_stack	*tmp_list;
	int		tmp;
	int		save;

	curr = *stack;
	tmp = (*next_b)->nb - curr->nb;
	save = tmp;
	if (save < 0)
		save *= -1;
	if (tmp < save)
	{
		tmp = save;
		tmp_list = curr;
	}
	curr = curr->next;
	while (curr != NULL)
	{
		save = (*next_b)->nb - curr->nb;
		if (save < 0)
			save *= -1;
		if (tmp < save)
		{
			tmp = save;
			tmp_list = curr;
		}
		curr = curr->next;
	}
	return (tmp_list);
}

void	go_place_number(t_stack **next_b, t_stack **stack)
{
	t_stack *list;

	list = NULL;
	list = where_place(next_b, stack);
	printf("closer to who %d\n", list->nb);
	place_number(list, next_b, stack);
}
