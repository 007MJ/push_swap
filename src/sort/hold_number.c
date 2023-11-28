/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/17 12:26:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	hould_count(t_stack **stack, t_stack	*list)
{
	t_stack	*current;
	int		i;

	current = *stack;
	i = 1;
	while (current != NULL)
	{
		if (current->nb == list->nb)
		{
			if (i > lstsize(*stack) / 2)
			{
				i = lstsize(*stack) - i;
				list->ra_rra = 2;
				if (i == 0)
					i++;
			}
			else
				list->ra_rra = 1;
			return (i);
		}
		current = current->next;
		i++;
	}
	return (-1);
}

void	give_move(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	while (current != NULL)
	{
		if (current->on == 1)
		{
			current->move = hould_count(stack, current);
		}
		current = current->next;
	}
}

t_stack	*less_move(t_stack **stack)
{
	int		tmp;
	t_stack	*tmp_list;
	t_stack	*current;

	tmp_list = NULL;
	tmp = lstsize(*stack);
	current = *stack;
	while (current != NULL)
	{
		if (current->on == 1)
		{
			if (tmp > current->move)
			{
				tmp = current->move;
				tmp_list = current;
			}
		}
		current = current->next;
	}
	return (tmp_list);
}

void	number_we_check(t_stack **stack, int chunks, int number)
{
	t_stack	*current;
	int		start;

	current = *stack;
	start = 0;
	while (current != NULL && start < chunks)
	{
		if (current->index >= number)
		{
			current->on = 1;
		}
		start++;
		current = current->next;
	}
}

t_stack	*hold_number(t_stack **stack, int i, int number)
{
	t_stack	*less;

	number_we_check(stack, i, number);
	give_move(stack);
	less = less_move(stack);
	return (less);
}
