/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_biger.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:10:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/10 15:31:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	get_on_top(t_stack **stack_b, t_stack **stack, int n, int move)
{
	printf("number of move %d\n", move);
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
	// printf("number has been push %d\n", (*stack)->nb);
}

void	rb_rrb(t_stack **stack_b, t_stack **stack , int nb)
{
	t_stack	*current;
	int		where;
	int		len;

	where = 1;
	len = lstsize(*stack_b);
	current = *stack_b;
	// printf("is nb %d\n", nb);
	// printlst(stack_b);
	while (current != NULL && current->nb != nb)
	{
		where++;
		current = current->next;
	}
	// t_stack *s = search_list(*stack_b, where);
	// printf("est'il un bon numbre %d\n", s->nb);
	// printf("where is number%d\n", where);
	if (where > len / 2)
		get_on_top(stack_b, stack, 2,where);
	else
		get_on_top(stack_b, stack, 1,  where);
}

void	push_biger(t_stack **stack, t_stack **stack_b)
{
	t_stack	*current;
	int		tmp;

	current = *stack_b;
	tmp = 0;
	while (current != NULL)
	{
		if (tmp < current->nb)
			tmp = current->nb;
		current = current->next;
	}
	printf("le plus grand numbre %d\n", tmp);
	// (void)stack;
	rb_rrb(stack_b, stack, tmp);
}
