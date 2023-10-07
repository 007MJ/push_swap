/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/07 11:41:03 by mnshimiy         ###   ########.fr       */
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
		printf("is seconde return NULL\n");
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

int count_move(t_stack **stack, t_stack *list)
{
	int i;
	t_stack *current;

	current = *stack;
	i = 1;
	while (current != NULL && list != NULL)
	{
		if (list->index == current->index)
			return (i);
		current = current->next;
		i++;
	}
	printf("return of count_move %d\n", i);
	return (i);
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

	/// la function is_first elle marche pas !!
	count_first = 0;
	count_second = 0;
	first = is_first(stack, chunks, len / 2);
		if (first == NULL)
			printf("if first NULL ->\n");
		else
			printf("is first TRUE %d\n", first->nb);
	second = is_second(stack, chunks, len / 2);
	if (second == NULL)
		printf("if second NULL ->\n");
	else
		printf("is second TRUE %d\n", second->nb);
	count_first =  count_move(stack, first);
	count_second = count_move(stack, second);
	if (count_move(stack, first) > count_move(stack, second))
		return (1);
	else
		return (2);
	print(stack);
	return (1);
}
