/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_or_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:13:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/29 17:53:41 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	up_or_down(t_stack **stack, t_stack *list)
{
	if (stack != NULL && list != NULL && lstsize(*stack) > 2)
	{
		if (list->ra_rra == 1)
		{
			while (list->move > 0)
			{
				rotate_a(stack, "ra\n");
				list->move--;
			}
		}
		if (list->ra_rra == 2)
		{
			while (list->move > 0)
			{
				reverse_rotate_a(stack, "rra\n");
				list->move--;
			}
		}
	}
}
