/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_count_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:21:43 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/21 14:07:53 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int first_count_move(t_stack **stack, t_stack *list)
{
	int		i;
	t_stack	*current;
	int		middle;

	current = *stack;
	middle = lstsize(*stack) / 2;
	i = 1;
	if (middle % 2 != 0)
		middle ++;
	while (current != NULL && list != NULL)
	{
		if (list->index == current->index)
			return (i);
		current = current->next;
		i++;
	}
	return (i);
}
