/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_count_move.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:27:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/10 20:38:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int second_count_move(t_stack **stack, t_stack *list)
{
	int i;
	t_stack *current;

	current = *stack;
	i = 1;
	while (current != NULL && list != NULL)
	{
		if (list->index == current->index)
			return (lstsize(*stack) - i);
		current = current->next;
		i++;
	}
	return (lstsize(*stack) - i);
}
