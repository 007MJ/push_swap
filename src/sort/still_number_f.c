/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   still_number_f.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:41:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/14 16:42:12 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	still_numbe_f(t_stack **stack, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack);
	while (len > 0)
	{
		len = lstsize(*stack);
		push_b(stack, stack_b);
	}
}
