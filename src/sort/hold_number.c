/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/17 21:59:13 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack*	is_second(t_stack **stack, int chunk , int middle)
{

	return (NULL);
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
int less_than_middle(t_stack **stack, int chunks, int len)
{
	t_stack	*first;

	first = is_first(stack, chunks, len / 2);
	if (first == NULL)
		return (-1);
	return (first_count_move(stack, first));
}

int	bigger_than_middle(t_stack **stack, int chunks, int len)
{
	t_stack	*second;

	second = is_second(stack, chunks, len / 2);
	if (second == NULL)
		return (-1);
	return (second_count_move(stack, second));
}

t_stack  *hold_number(t_stack **stack, int chunks, int len)
{
	int	first;

	first = less_than_middle(stack, chunks, len);
	printf("nnumber of move [%d]\n", first);
	// if ( first == -1)
	return (NULL);
}
