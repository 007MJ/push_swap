/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:56:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 18:17:01 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack *delete_list(t_stack *stack, int position)
{
	int		i;
	t_stack	*tmp;
	t_stack	*current;

	tmp = NULL;
	i = 1;
	current = stack;
	while (current != NULL)
	{
		if (i == position)
		{
			tmp = current;
			current = current->next;
			free(tmp);
			return (current);
		}
		current = current->next;
		i++;
	}
	return (current);
}
