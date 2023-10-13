/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/13 01:51:03 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"


t_stack*	is_second(t_stack **stack, int chunk , int middle)
{
	return (NULL);
}



void print(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
	}
}

t_stack  *hold_number(t_stack **stack, int chunks, int len)
{
	t_stack *first;
	t_stack *second;
	int	count_first;
	int	count_second;


	count_first = -1;
	count_second = -1;
	first = is_first(stack, chunks, len / 2);
	second = is_second(stack,chunks, len / 2);
	if (first == NULL && second == NULL)
		return (NULL);
	if (first != NULL)
	{
		count_first = first_count_move(stack, first);
		first->move = count_first;
		first->ra_rra = 1;
	}
	// if (second != NULL)
	// {
	// 	count_second = second_count_move(stack, second);
	// 	second->move = count_second;
	// 	second->ra_rra  = 2;
	// }
	if (count_first != -1 && count_first <= count_second)
		return (first);
	// else if (second != NULL && count_first > count_second && count_first)
	// 	return (second);
	return (NULL);
}
