/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:08:45 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/12 18:40:25 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_sort(t_stack **stack)
{
	t_stack	*current;
	int		tmp;

	tmp = 0;
	current = *stack;
	if (lstsize(*stack) < 2)
		return (1);
	while (current->next != NULL)
	{
		tmp = current->nb;
		if (tmp > current->next->nb)
			return (-1);
		current = current->next;
	}
	return (1);
}
