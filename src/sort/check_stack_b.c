/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/11 01:40:08 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	is_big(t_stack **stack, t_stack **stack_b)
{
	if ((*stack)->nb < (*stack_b)->nb)
	{
		printf("stack a -> %d\nstack b -> %d\n", (*stack)->nb , (*stack_b)->nb);
		rotate_a(stack_b, "rb\n");
	}
	else
		push_b(stack, stack_b);
}

void check_stack_b(t_stack **stack, t_stack **stack_b)
{
	int		big;

	if (is_followed(stack) == 1)
		return ;
	if (*stack_b == NULL)
	{
		push_b(stack, stack_b);
	}
	else
	{
		is_big(stack, stack_b);
	}
}

