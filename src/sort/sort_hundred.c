/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/04 22:17:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	get_list_up(t_stack **stack, t_stack *index_list)
{
	int	i;

	i = 1;
	if (index_list != NULL)
	{
		if (index_list ->ra_rra == 1)
		{
		while (index_list->move > i)
		{
			rotate_a(stack, "ra\n");
			i++;
		}
		}
		if (index_list->ra_rra == 2)
		{
			while (index_list->move >= i)
			{
				reverse_rotate_a(stack, "rra\n");
				i++;
			}
		}
	}
}

void	up_down(t_stack **stack)
{
	int			i;
	t_stack		*last;

	i = 0;
	last = search_list(*stack, lstsize(*stack));
	while (i == 0 && (*stack)->nb > last->nb && lstsize(*stack) > 0)
	{
		if ((*stack)->nb < last->nb)
			i = 1;
		else
		{
			if ((*stack)->nb > last->nb && i == 0)
				rotate_a(stack, "ra\n");
		}
	}
}

void let_s(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		printf("index-number-> %d and chunks->%d\n", current->index, current->chunks);
		current = current->next;
	}
}

t_stack		*sort_hundred(t_stack **stack, t_stack **stack_b, int i)
{
	t_stack	*index_list;
	reset_on(stack);
	index_list = hold_number(stack, i, 100);
	up_or_down(stack, index_list);
	// check_stack_b(stack, stack_b, index_list, i);
	(void)stack_b;
	return (index_list);
}
