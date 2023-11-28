/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_chunks_in_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:38:00 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 17:20:23 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_chunks_in_stack(t_stack **stack, int start)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = *stack;
	while (current != NULL)
	{
		if (current->index >= start)
			i++;
		current = current->next;
	}
	if (i > 0)
		return (i);
	return (-1);
}
