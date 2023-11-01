/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:34 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/31 23:32:58 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	big(t_stack **stack_b)
{
	int	tmp;
	int	i;
	t_stack	*curr;

	i = 1;
	curr = *stack_b;
	tmp = 0;
	while (curr != NULL)
	{
		if (curr->nb > tmp)
			tmp = curr->nb;
		curr = curr->next;
	}
	curr = *stack_b;
	while (curr != NULL)
	{
		if (curr->nb == tmp)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}

int which_number(t_stack **stack_b, int i)
{
	if (i == 3)
		return ( big(stack_b));
	else if (i == 2)
		retrn (middle(stack_b,  i));
	else if (i == 1)
		return (one(stack_b, i));
	else
		return (-1);
}
