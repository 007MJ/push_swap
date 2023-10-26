/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 18:15:50 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"


void on_see(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		if (current->chunks == 0)
			printf("current->index %d, current->chunks %d, current->nb %d\n", current->index, current->chunks, current->nb);
		current = current->next;
	}
}

t_stack		*less_move(t_stack **stack, int middle, int chunks)
{
	t_stack	*first;
	t_stack	*tmp_list;
	int		tmp;
	int		stop;

	stop = 0;
	tmp_list = new_stack();
	tmp_list->move = lstsize(*stack);
	while ( stop != 1)
	{
		first = is_first(stack, chunks);
		if (first == NULL)
			return (first);
		tmp = first_count_move(stack, first);
		if (tmp > middle)
		{
			tmp = lstsize(*stack) - tmp;
			tmp_list->ra_rra = 2;
		}
		else
			tmp_list->ra_rra = 1;
		if ( tmp_list->move > tmp)
		{
			tmp_list = first;
			tmp_list->move = tmp;
		}
		stop = first->on;
		first->on = 1;
	}
	return (tmp_list);
}

t_stack  *hold_number(t_stack **stack, int chunks, int len)
{
	t_stack	*first;
	int		middle;

	middle = len / 2;
	if (middle % 2 == 0)
		middle++;
	first = less_move(stack, middle, chunks);
	if (first == NULL)
		return (NULL);
	if (first != NULL && first->move == 0)
		first->move = 1;
	return (first);
}
