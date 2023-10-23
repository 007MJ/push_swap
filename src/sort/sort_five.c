/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:04 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/23 03:08:15 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_number(t_stack **stack)
{
	t_stack	*last_number;
	t_stack	*second;
	t_stack	*three;

	second = search_list(*stack, 2);
	three = search_list(*stack, 3);
	last_number = search_list(*stack, lstsize(*stack));
	if ((*stack)->nb > last_number->nb)
		rotate_a(stack, "ra\n");
	if ((*stack)->nb > second->nb && (*stack)->nb < last_number->nb && (*stack)->nb < three->nb)
		swap_a_b(*stack, "sa\n");
}

void	between_first_and_last(t_stack **stack, t_stack **stack_b)
{
	t_stack	*last_number;
	t_stack	*before_last;

	before_last = search_list(*stack, lstsize(*stack) - 1);
	last_number = search_list(*stack, lstsize(*stack));
	if ((*stack_b)->nb > before_last->nb && (*stack_b)->nb < last_number->nb)
	{
		reverse_rotate_a(stack, "rra\n");
		push_a(stack_b, stack);
		if ((*stack_b)->nb > last_number->nb)
			rotate_a(stack, "ra\n");
	}
	push_a(stack_b, stack);
	sort_number(stack);
	push_a(stack_b, stack);
	sort_number(stack);
}

void	sort_five(t_stack **stack, t_stack **stack_b)
{
	push_b(stack,stack_b);
	push_b(stack,stack_b);
	sort_three(stack);
	between_first_and_last(stack, stack_b);
}
