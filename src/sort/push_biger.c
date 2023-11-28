/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_biger.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:10:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/17 12:25:44 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	get_on_top(t_stack **stack_b, t_stack **stack, int n, int move)
{
	if (n == 2)
	{
		while (move <= lstsize(*stack_b))
		{
			reverse_rotate_a(stack_b, "rrb\n");
			move++;
		}
	}
	else
	{
		while (move > 1)
		{
			rotate_a(stack_b, "rb\n");
			move--;
		}
	}
	push_a(stack_b, stack);
}

void	rb_rrb(t_stack **stack_b, t_stack **stack, int nb)
{
	t_stack	*current;
	int		where;
	int		len;

	where = 1;
	len = lstsize(*stack_b);
	current = *stack_b;
	while (current != NULL && current->index != nb)
	{
		where++;
		current = current->next;
	}
	if (where > len / 2)
		get_on_top(stack_b, stack, 2, where);
	else
		get_on_top(stack_b, stack, 1, where);
}

void	push_biger(t_stack **stack, t_stack **stack_b)
{
	t_stack	*current;
	int		tmp;

	put_index(stack_b);
	current = *stack_b;
	tmp = 0;
	while (current != NULL)
	{
		if (tmp < current->index)
			tmp = current->index;
		current = current->next;
	}
	rb_rrb(stack_b, stack, tmp);
}
