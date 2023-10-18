/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_followed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:27:21 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/17 19:29:52 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_followed(t_stack **stack)
{
	t_stack *current;
	int		index;

	current = *stack;
	index = current->index;
	while (current != NULL)
	{
		if (index > current->index || index == current->index)
			return (-1);
		index = current->index;
		current = current->next;
	}
	return (1);
}
