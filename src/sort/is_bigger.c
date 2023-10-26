/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_bigger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:34 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/25 19:03:55 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int is_bigger(t_stack *stack, t_stack **stack_b)
{
	int		i;
	t_stack	*current;

	current = *stack_b;
	i = 1;
	while (current != NULL)
	{
		if (stack->nb > current->nb)
			i++;
		current = current->next;
	}
	if (i == lstsize(*stack_b))
		return (i);
	return (0);
}
