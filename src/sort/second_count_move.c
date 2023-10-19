/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_count_move.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:27:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/18 19:11:29 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int second_count_move(t_stack **stack, t_stack *list)
{
	int	i;
	int	middle;
	t_stack *current;

	current = *stack;
	middle = lstsize(*stack) / 2;
	if (middle % 2 != 0)
		middle++;
	i = 1;
	while (current != NULL && list != NULL)
	{
		if (i > middle)
			break ;
		current = current->next;
		i++;
	}
	i = 1;
	while (current != NULL && list != NULL)
	{
		if (list->index == current->index)
			return (i);
		current = current->next;
		i++;
	}
	if (list != NULL)
		return (-1);
	return (i);
}
