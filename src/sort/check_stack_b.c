/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/07 12:51:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_big(t_stack *stack, t_stack **stack_b)
{
	if (stack->nb > (*stack_b)->nb)
	{
		rotate_a(stack_b, "rb");
		return (1);
	}
	return (0);
}

void check_stack_b(t_stack **stack, t_stack **stack_b)
{
	if (*stack_b == NULL)
		(*stack_b)->next = *stack;
	else
	{
		while (is_big == 1)
		{
			is_big(stack, stack_b);
		}
		push_b(stack, stack_b);
	}
}

