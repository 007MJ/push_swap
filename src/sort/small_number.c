/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:15:52 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 20:35:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*where_nb(t_stack **stack)
{
	int		tmp;
	t_stack	*tmp_list;
	t_stack	*current;

	current = *stack;
	if (stack != NULL)
	{
		tmp = current->nb;
		tmp_list = current;
		current = current->next;
	}
	while (current != NULL)
	{
		if (tmp > current->nb)
		{
			tmp = current->nb;
			tmp_list = current;
		}
		current = current->next;
	}
	return (tmp_list);
}

int	small_number(t_stack **stack)
{
	t_stack	*small;

	small = where_nb(stack);
	return (small->index);
}
