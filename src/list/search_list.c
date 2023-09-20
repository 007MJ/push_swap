/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:26:48 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 17:27:18 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*search_list(t_stack *stack, int position)
{
	t_stack	*current;
	int		i;

	current = stack;
	i = 1;
	while (current != NULL)
	{
		if (i == position)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
