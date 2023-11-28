/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/17 12:25:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	still_number(t_stack **stack, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack);
	while (len > 0)
	{
		len = lstsize(*stack);
		push_b(stack, stack_b);
	}
}

void	while_stack_b(t_stack **stack, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack_b);
	while (len > 2)
	{
		len = lstsize(*stack_b);
		push_biger(stack, stack_b);
	}
	push_a(stack_b, stack);
	rotate_a(stack, "ra\n");
}

int	is_chunks_in_stack_a(t_stack **stack, int start)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = *stack;
	while (current != NULL)
	{
		if (current->index >= start)
			i++;
		current = current->next;
	}
	if (i > 0)
		return (i);
	return (-1);
}

void	sort_hundred(t_stack **stack, t_stack **stack_b, int chunks)
{
	int		start;
	t_stack	*hold;

	put_index(stack);
	start = len_by_index(stack) - 25;
	while (lstsize(*stack) > 0)
	{
		reset_on(stack);
		hold = hold_number(stack, chunks, start);
		up_or_down(stack, hold);
		check_stack_b(stack, stack_b);
		if (is_chunks_in_stack_a(stack, start) == -1)
			start = len_by_index(stack) - 25;
	}
	while_stack_b(stack, stack_b);
}
