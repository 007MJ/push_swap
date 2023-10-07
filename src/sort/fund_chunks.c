/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fund_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:32:50 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/07 12:04:38 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	fund_chunks(t_stack **stack, int chunk, int middle, int n)
{
	t_stack *current;
	int		i;
	int		y;

	i = 1;
	y = 0;
	current = *stack;
	if (n == 2)
	{
		while (current != NULL)
		{
			if (current->chunks == chunk && i > middle)
				y++;
			i++;
			current = current->next;
		}
	}
	else
	{
		while (current != NULL)
		{
			if (current->chunks == chunk && i <= middle)
				y++;
			i++;
			current = current->next;
		}
	}
	return (y);
}