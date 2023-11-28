/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:29:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 17:20:12 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	duplicate(t_stack **stack)
{
	t_stack	*current;
	t_stack	*check;

	current = NULL;
	check = NULL;
	current = *stack;
	check = *stack;
	while (current != NULL)
	{
		current->on = 3;
		while (check != NULL)
		{
			if (check->on != 3)
			{
				if (current->nb == check->nb)
					return (-1);
			}
			check = check->next;
		}
		check = *stack;
		current = current->next;
	}
	return (0);
}
