/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/11 01:48:21 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	printchunks(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		// printf("chunks-> {%d}", current->chunks);
		current = current->next;
	}
}

int	much_get_up(t_stack **stack, int index_list)
{
	int		i;
	t_stack	*current;

	i = 1;
	current = *stack;
	while (current != NULL)
	{
		if (current->index == index_list)
			return (i);
		current = current->next;
		i++;
	}
	return (i);
}

void	get_list_up(t_stack **stack, int index_list)
{
	int	many;
	int	middle;

	many = much_get_up(stack, index_list);
	middle = lstsize(*stack) / 2;
	if (middle % 2 != 0)
		middle ++;
	if (many < middle)
	{
		while (many > 1)
		{
			rotate_a(stack, "ra\n");
			many--;
		}
	}
	if (many > middle)
	{
		many = lstsize(*stack) - many;
		while (many > 1)
		{
			reverse_rotate_a(stack, "rra\n");
			many--;
		}
	}
}

void	up_down(t_stack **stack)
{
	int			i;
	t_stack		*last;

	i = 0;
	last = search_list(*stack, lstsize(*stack));
	while (i == 0)
	{
		if ((*stack)->nb < last->nb)
			i = 1;
		else
		{
			if ((*stack)->nb > last->nb)
				rotate_a(stack, "ra\n");
		}
	}
}


void		sort_hundred(t_stack **stack, t_stack **stack_b)
{
	int	i;
	int	index_list;

	i = 0;
	chunks(stack, 5);
	while (i < 5)
	{
		index_list = hold_number(stack, i, 100);
		if (is_followed(stack) == 1)
			break ;
		up_down(stack);
		get_list_up(stack, index_list);
		check_stack_b(stack, stack_b);
		put_index(stack);
		if (index_list == -1)
			i++;
	}
}
