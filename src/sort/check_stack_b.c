/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/23 20:09:48 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_stack_b(t_stack **stack, t_stack **stack_b)
{
	int	stop;


	stop = 0;
	if (is_followed(stack) == 1)
		return ;
	if (*stack_b == NULL)
	{
		push_b(stack, stack_b);
	}
	while (stop == 0)
	{
		if ((*stack)->nb < (*stack_b)->nb)
		{
			stop = 1;
			push_b(stack, stack_b);
		}
		else
			rotate_a(stack_b, "rb\n");
	}

}

