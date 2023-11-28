/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_by_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:14:58 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 17:20:05 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	len_by_index(t_stack **stack)
{
	int		tmp;
	t_stack	*current;

	tmp = 0;
	current = NULL;
	current = *stack;
	while (current != NULL)
	{
		if (tmp < current->index && tmp != current->index)
		{
			tmp = current->index;
		}
		current = current->next;
	}
	return (tmp);
}
