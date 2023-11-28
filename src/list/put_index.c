/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:50:26 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/17 12:28:49 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	small_list(t_stack **stack)
{
	t_stack	*current;
	int		tmp;

	current = *stack;
	while (current != NULL)
	{
		if (current->on == 0)
		{
			tmp = current->nb;
			break ;
		}
		current = current->next;
	}
	current = *stack;
	while (current != NULL)
	{
		if (current->on == 0 && tmp > current->nb && current->nb != tmp)
		{
			tmp = current->nb;
		}
		current = current->next;
	}
	return (tmp);
}

void	ticket_list(t_stack **stack, int i)
{
	t_stack	*current;
	int		small;

	current = *stack;
	small = small_list(stack);
	while (current != NULL)
	{
		if (current->nb == small)
		{
			current->on = 1;
			current->index = i;
			break ;
		}
		current = current->next;
	}
}

t_stack	*put_index(t_stack **stack)
{
	int		index;
	int		size;

	reset_on(stack);
	size = lstsize(*stack);
	index = 1;
	while (index < size)
	{
		ticket_list(stack, index);
		index++;
	}
	return (*stack);
}
