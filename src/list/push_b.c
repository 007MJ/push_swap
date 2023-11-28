/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:21:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/23 18:37:03 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;

	ft_putstr("pb\n");
	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	if (*stack_a == NULL)
		return ;
	if (*stack_b == NULL)
	{
		new->nb = (*stack_a)->nb;
		new->index = (*stack_a)->index;
		new->next = NULL;
		*stack_b = new;
	}
	else
	{
		new->nb = (*stack_a)->nb;
		new->index = (*stack_a)->index;
		new->next = (*stack_b);
		*stack_b = new;
	}
	delete_first(stack_a);
}
