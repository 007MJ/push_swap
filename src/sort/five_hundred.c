/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:07:09 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/23 17:32:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	while_stack_b_f(t_stack **stack, t_stack **stack_b)
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

void	five_hundred(t_stack **stack, t_stack **stack_b, int i)
{
	int		start;
	t_stack	*hold;

	*stack = put_index(stack);
	hold = NULL;
	start = len_by_index(stack) - 50;
	while (lstsize(*stack) > 0)
	{
		reset_on(stack);
		hold = hold_number(stack, i, start);
		up_or_down(stack, hold);
		check_stack_b(stack, stack_b);
		if (is_chunks_in_stack(stack, start) == -1)
			start = len_by_index(stack) - 50;
	}
	while_stack_b_f(stack, stack_b);
}
