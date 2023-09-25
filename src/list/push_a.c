/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:21:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/22 20:27:54 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_stack(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr("pa\n");
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if(!new)
		return ;
	if (*stack_a == NULL)
		return ;
	if (*stack_b == NULL)
	{
		printf("if : on est la -> %p\n", stack_b);
		new->nb = (*stack_a)->nb;
		new->next = NULL;
		*stack_b = new;
		printf("if : on est la -> %p\n", stack_b);
	}
	else
	{
		new->nb = (*stack_a)->nb;
		new->next = (*stack_b);
		*stack_b = new;
		printf(" else:on est la -> %d\n", (*stack_b)->nb);
	}
	delete_first(&stack_a);

}

