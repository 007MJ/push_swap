/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:04 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/12 02:58:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"



void	last_check(t_stack **stack, t_stack **stack_b)
{
	if (stack_b != NULL)
	{
		if ((*stack)->nb > (*stack)->next->nb)
			swap_a_b(*stack_b, "sb\n");
	}
	if (lstsize(*stack) > 2)
	{
		push_a(stack_b, stack);
		push_a(stack_b, stack);
	}
}
void sort_four(t_stack **stack, t_stack **stack_b)
{
	if (lstsize(*stack) == 3)
	{
		sort_three(stack);
	}
	else if (lstsize(*stack) == 4)
	{
		small_number(stack, stack_b);
		sort_three(stack);
		push_a(stack_b, stack);
	}
	else
	{
		if (lstsize(*stack) > 1)
			if ((*stack)->nb > (*stack)->next->nb)
				swap_a_b(*stack, "sa\n");
	}
}

void	sort_five(t_stack **stack, t_stack **stack_b)
{
	if (lstsize(*stack) <= 4)
		sort_four(stack, stack_b);
	if (lstsize(*stack) == 5)
	{
		small_number(stack, stack_b);
		push_b(stack, stack_b);
		small_number(stack, stack_b);
		push_b(stack, stack_b);
		sort_three(stack);
		last_check(stack, stack_b);
	}
}
