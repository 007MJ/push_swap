/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_or_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:13:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/19 18:01:41 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	up_or_down(t_stack **stack, int move, int up_down)
{
	if (stack != NULL)
	{
		if (up_down == 1)
		{
			while (move >= 1)
			{
				rotate_a(stack, "ra\n");
				move--;
			}
		}
		if (up_down == 2)
		{
			while (move <= lstsize(*stack))
			{
				reverse_rotate_a(stack, "rra\n");
				move++;
			}
		}
	}
}
