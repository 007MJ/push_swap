/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/21 17:19:43 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack*	is_second(t_stack **stack, int chunk , int middle)
{
	t_stack	*current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	if (fund_chunks(stack, chunk) == 0)
		return (NULL);
	while (current != NULL)
	{
		if (current->chunks == chunk && i > middle)
		{
			lstmp = current;
			break ;
		}
		current = current->next;
		i++;
	}
	i = 1;
	current = *stack;
	while (current != NULL)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb && i > middle)
			lstmp = current;
		current = current->next;
		i++;
	}
	return (lstmp);
}

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
