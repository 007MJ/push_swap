/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/11 01:07:09 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// trouve le plus petit nombre qui fais parti d'un chunks
// ensuite regard si son index et plus grands ou plus petit faire un comparaison avec les autre nombre


t_stack*	is_second(t_stack **stack, int chunk , int middle)
{
	t_stack *current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	if (fund_chunks(stack, chunk, middle, 2) == 0)
	{
		// printf("is seconde return NULL\n");
		return (NULL);
	}
	while (current != NULL && i <= middle)
	{
		current = current->next;
		i++;
	}
	while (current != NULL)
	{
		if (current->chunks == chunk && i > middle)
			lstmp = current;
		current = current->next;
		i++;
	}
	i = i;
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



void print(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
	}
}

int hold_number(t_stack **stack, int chunks, int len)
{
	t_stack *first;
	t_stack *second;
	int	count_first;
	int	count_second;


	count_first = -1;
	count_second = -1;
	first = is_first(stack, chunks, len / 2);
	second = is_second(stack, chunks, len / 2);
	if (first == NULL && second == NULL)
		return (-1);
	if (first != NULL)
		count_first = first_count_move(stack, first);
	if (second != NULL)
		count_second = second_count_move(stack, second);
	if (count_first != -1 && count_first <= count_second)
		return (first->index);
	else if (second != NULL && count_first > count_second && count_first)
		return (second->index);
	return (-1);
}
